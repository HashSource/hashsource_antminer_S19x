#!/bin/sh
# for CV183X platform update, file description:
# BOOT.bin --------> minerfs.gz ---> /dev/mmcblk0p3
# devicetree.dtb --> sig.bin    ---> /dev/mmcblk0p4
# uImage ----------> boot.emmc  ---> /dev/mmcblk0p1

set -x
exec > /nvdata/update.log 2>&1

pemSel='/etc/bitmain.pub'
srcFile="$1"
subtype=""

getAllType() {
    FILE=$1
    if [ -f $FILE ]; then
        type_result=$(/www/pages/cgi-bin/miner_type.cgi)
        miner_type=$(echo $type_result | jq ".miner_type")
        miner_type=$(echo $miner_type | sed 's/\"//g')
        subtype=$(echo $type_result | jq ".subtype")
        subtype=$(echo $subtype | sed 's/\"//g')
        return 0
    else
        return 44
    fi
}

chkPemFile() {
    /usr/bin/FileParser -f "$subtype" $1 /etc/bitmain.pub
    res=$?
    if [ $res -ne 0 ]; then
        /usr/bin/FileParser -f "$subtype" $1 /etc/bitmain-release.pub
        res=$?
        if [ $res -ne 0 ]; then
            echo "Check Pem Failed!"
            return $res
        fi
        echo "Using Release Public Key!"
        pemSel="/etc/bitmain-release.pub"
        return 0
    fi
    echo "Using Debug Public Key!"
    pemSel="/etc/bitmain.pub"
    return 0
}

spliteFile() {
    rm -rf /tmp/tmpfw
    mkdir -p /tmp/tmpfw

    chkPemFile $1
    res=$?
    if [ $res -ne 0 ]; then
        echo "Check Pem Failed!"
        return $res
    fi

    /usr/bin/FileParser -s "$subtype" $1 ${pemSel}
    res=$?
    if [ $res -ne 0 ]; then
        echo "Check Bmu Failed!"
        return $res
    fi

    mv /tmp/tmpfw/BOOT.bin /tmp/tmpfw/minerfs.gz
    mv /tmp/tmpfw/BOOT.bin.sig /tmp/tmpfw/minerfs.gz.sig
    mv /tmp/tmpfw/devicetree.dtb /tmp/tmpfw/sig.bin
    mv /tmp/tmpfw/devicetree.dtb.sig /tmp/tmpfw/sig.bin.sig
    mv /tmp/tmpfw/uImage /tmp/tmpfw/boot.emmc
    mv /tmp/tmpfw/uImage.sig /tmp/tmpfw/boot.emmc.sig

    return $res
}

checkFile() {
    cd /tmp/tmpfw || exit

    if [ ! -f miner.pem ]; then
        echo "Cannot Find Miner!"
        return 1
    fi
    if [ ! -f miner.pem.sig ]; then
        echo "Cannot Find Miner Signature!"
        return 2
    fi

    openssl dgst -sha256 -verify ${pemSel} -signature miner.pem.sig miner.pem > /dev/null
    res=$?
    if [ $res -ne 0 ]; then
        echo "Check Miner Signature Failed!"
        return 3
    fi

    srcFile="minerfs.gz boot.emmc sig.bin"
    for file in ${srcFile}; do
        sigFile="${file}.sig"
        if [ -f ${file} ]; then
            if [ ! -f ${sigFile} ]; then
                echo "Cannot Find ${sigFile}!"
                return 1
            else
                openssl dgst -sha256 -verify miner.pem -signature ${sigFile} ${file} > /dev/null
                res=$?
                if [ $res -ne 0 ]; then
                    echo "Check ${file} Signature Failed!"
                    return 2
                fi
            fi
        fi
    done
}

writeToEmmc() {
    cd /tmp/tmpfw/ || exit

    if [ -f boot.emmc ]; then
        echo "write boot file to emmc"
        blkdiscard /dev/mmcblk0p1
        dd if=boot.emmc of=/dev/mmcblk0p1
    fi

    if [ -f sig.bin ]; then
        echo "write sig file to emmc"
        blkdiscard /dev/mmcblk0p4
        dd if=sig.bin of=/dev/mmcblk0p4
    fi

    if [ -f minerfs.gz ]; then
        echo "write miner fs to emmc"
        blkdiscard /dev/mmcblk0p3
        dd if=minerfs.gz of=/dev/mmcblk0p3
    fi

    sleep 3
    sync
    echo "----------write all update files over---------------"
}

function checkType(){
    header=$(dd if=${srcFile} bs=1 count=20 2>/dev/null)
    type_str=$(printf "$header" | grep -oE "\{[^}]*\}")
    type_length=0
    type="update"

    if echo "$type_str" | grep -q "{type:[^}]*}"; then
        type_length=${#type_str}
        type=$(echo $type_str | sed 's/.*{type:\(.*\)}.*/\1/')
        echo "The type is: $type"
    else
        echo "failed to get {type:*}, might be update file"
    fi
}

function poolUpdate(){
    if [[ x$type == x"pool" ]]; then
        pool_count_file="/nvdata/pool/history/count"
        pool_history_path="/nvdata/pool/history"
        pool_data_path="/nvdata/pool"
        pool_count=0
        reload=false
        tail -c +$((type_length + 1)) ${srcFile} > pool.tar.gz
        mkdir -p /tmp/pool
        mv pool.tar.gz /tmp/pool
        cd  /tmp/pool
        tar -zxvf pool.tar.gz
        openssl dgst -sha256 -verify /etc/bitmain-adv.pub -signature pool.json.sig pool.json
        if [ $? -eq 0 ]; then
            echo "Verification pool.json successful."

            # check history pool path
            if [ ! -d "$pool_history_path" ]; then
                mkdir -p $pool_history_path
            fi

            # check pool setting history count
            if [ -f "$pool_count_file" ]; then
                pool_count=$(cat "$pool_count_file")
            else
                echo 0 > $pool_count_file
                pool_count=0
            fi

            # saving pool file
            mv pool.tar.gz $pool_history_path/pool.tar.gz$pool_count
            pool_count=$((pool_count + 1))
            echo $pool_count > $pool_count_file

            # get user id and status
            pool_id_old=""
            pool_id_new=""
            pool_time_old=""
            pool_time_new=""
            pool_id_status="disable"
            if [ -f $pool_data_path/pool.json ]; then
                # check old pool data file
                openssl dgst -sha256 -verify /etc/bitmain-adv.pub -signature $pool_data_path/pool.json.sig $pool_data_path/pool.json
                if [ $? -eq 0 ]; then
                    # get user id
                    json_data=$(cat $pool_data_path/pool.json)
                    pool_id_old=$(echo $json_data | jq -r '.id')
                    pool_time_old=$(echo $json_data | jq -r '.timestamp')
                else
                    pool_id_old="illegal"
                    echo "verify old pool data failed."
                fi
            else
                pool_id_old="none"
                pool_time_old=0
            fi

            # check user id

            json_data=$(cat pool.json)
            pool_id_new=$(echo $json_data | jq -r '.id')
            pool_time_new=$(echo $json_data | jq -r '.timestamp')
            pool_id_status=$(echo $json_data | jq -r '.status')

            if [[ x$pool_id_old == x$pool_id_new || x$pool_id_old == x"none" ]]; then

                # check version
                if [ $pool_time_old -gt $pool_time_new ]; then
                    echo "Failed! Expired pool setting version."
                    return 1
                fi

                # check sn
                pool_sn=$(echo $json_data | jq -r '.sn')

                if [ ! -f /config/sn ]; then
                    if [[ x$pool_sn != x"all" ]]; then
                        echo "Local sn is null"
                        cd /
                        rm -rf /tmp/pool
                        return 1
                    fi
                fi
                
                local_sn=$(cat /config/sn)
                echo "$pool_sn" | grep -q "$local_sn"

                if [ $? -eq 0 ]; then
                    echo "$local_sn exists in the sn list"
                else
                    if [[ x$pool_sn == x"all" ]]; then
                        echo "pool_sn value is all. Fitting to all device"
                    else
                        echo "$local_sn does not exist in the sn list"
                        cd /
                        rm -rf /tmp/pool
                        return 1
                    fi
                fi

                # copy settings
                pools_data=$(jq '.pools' pool.json)
                jq --argjson pools "$pools_data" '.pools = $pools' /config/cgminer.conf > temp.json && mv temp.json /config/cgminer.conf
                chmod a+rw /config/cgminer.conf
                reload=true

                # check status
                if [[ x$pool_id_status == x"enable" ]]; then
                    mv pool.json $pool_data_path
                    mv pool.json.sig $pool_data_path
                else
                    rm $pool_data_path/pool.json
                    rm $pool_data_path/pool.json.sig
                fi
            else
                echo "Check user id failed!"
            fi
        else
            echo "Verification pool.json failed."
        fi
        cd /
        rm -rf /tmp/pool
        sleep 2s

        if [ $reload == true ]; then
            cgminer-api {\"command\":\"reload\",\"new_api\":true} > /dev/null &
        fi

        return 1
    fi
}

function rootUpdate(){
    if [[ x$type == x"root" ]]; then
        tail -c +$((type_length + 1)) ${srcFile} > root.tar.gz
        mkdir -p /tmp/root
        mv root.tar.gz /tmp/root
        cd  /tmp/root
        tar -zxvf root.tar.gz

        openssl dgst -sha256 -verify /etc/bitmain-adv.pub -signature root.json.sig root.json
        if [ $? -eq 0 ]; then
            echo "Verification root.json successful."
            # check sn
            json_data=$(cat root.json)
            root_sn=$(echo $json_data | jq -r '.sn')

            if [ ! -f /config/sn ]; then
                echo "Local sn is null"
                cd /
                rm -rf /tmp/root
                return 1
            fi

            local_sn=$(cat /config/sn)
            echo "$root_sn" | grep -q "$local_sn"

            if [ $? -eq 0 ]; then
                echo "$local_sn exists in the sn list"
            else
                echo "$local_sn does not exist in the sn list"
                cd /
                rm -rf /tmp/root
                return 1
            fi

            # Setting root
            echo 'miner ALL=(ALL) NOPASSWD:ALL' >> /etc/sudoers
            chown root:root /usr/bin/sudo
            chmod 4755 /usr/bin/sudo
        else
            echo "Verification pool.json failed."
        fi
        cd /
        rm -rf /tmp/root
        sleep 2
        return 2
    fi
}

if [ -z ${srcFile} ]; then
    echo "Wrong Param"
    return 9
fi

# check the file type
checkType

# pool update
poolUpdate

# root update
rootUpdate

# Split Update File
getAllType ${srcFile}
res=$?
if [ $res -ne 0 ]; then
    echo "Get Type error! res=$res"
    return $res
fi

spliteFile ${srcFile}
res=$?
if [ $res -ne 0 ]; then
    echo "Splite Bmu Failed! res=$res"
    return $res
fi

# Check Splited Data
checkFile
res=$?
if [ $res -ne 0 ]; then
    echo "Check Data Failed! res=$res"
    return $res
fi

# check version
version_fw=$(cat /usr/bin/fw_version)
version_isolate=$(cat /usr/bin/isolate_time)

if [[ ${version_fw:0:1} != "2" ]] || [[ ${version_isolate:0:1} != "2" ]]; then
    echo "Both strings must start with the character '2'"
    return 1
fi

if [ "$version_fw" -gt "$version_isolate" ]; then
    echo "Right firmware version\n"
else
    echo "Illegal firmware version! version_fw:$version_fw version_isolate:$version_isolate\n"
    return 1
fi

# Write Each Part To Emmc
writeToEmmc
res=$?
if [ $res -ne 0 ]; then
    return $res
fi
