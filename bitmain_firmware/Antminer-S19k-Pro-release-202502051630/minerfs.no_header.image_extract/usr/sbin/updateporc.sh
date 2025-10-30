#!/bin/sh
#$FILE: FileName
FILE=$1
if [ -f $FILE ];then
    type_result=`/www/pages/cgi-bin/miner_type.cgi`
    miner_type=`echo $type_result | jq ".miner_type"`
    miner_type=`echo $miner_type | sed 's/\"//g'`
    subtype=`echo $type_result | jq ".subtype"`
    subtype=`echo $subtype | sed 's/\"//g'`
else
    return 1
fi
/usr/bin/FileParser -f "$subtype" $FILE /etc/bitmain.pub
res=$?
if [ $res -ne 0 ]; then
    return $res
fi
if [ ! -d /tmp/updatedata ]; then
  mkdir /tmp/updatedata
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

LOG_FILE=/tmp/update-mount-err.log
function mount_update()
{
    mount -t ubifs /dev/ubi1_0 /tmp/updatedata  > /dev/null
    res=$?
    if [ $res -ne 0 ];then
        echo "mount config failed!!!" >> ${LOG_FILE}
        return 2
    else
        return 0
    fi
}

function prepare_ubifs()
{
    ubiattach /dev/ubi_ctrl -m 6 -b 2 > /dev/null
    res=$?
    if [ $res -eq 0 ];then
        if [ -c /dev/ubi1_0 ];then
            mount_update
            res=$?
            return $res
        else
            ubimkvol /dev/ubi1 -m -N update_file > /dev/null
            res=$?
            if [ $res -ne 0 ];then
                echo "ubimkval failed !!!" > ${LOG_FILE}
                return 4
            else
                 mount_update
                 res=$?
                 return $res
            fi
        fi
    else
        flash_erase /dev/mtd6 0x0 0x0 > /dev/null
        ubiformat /dev/mtd6 -y > /dev/null 2>&1
        if [ $? -ne 0 ];then
            echo "ubiformat failed !!!" >> ${LOG_FILE}
            return 99
        else
            ubiattach /dev/ubi_ctrl -m 6 -b 2 > /dev/null 2>&1
            if [ $? -eq 0 ];then
                ubimkvol /dev/ubi1 -m -N update_file > /dev/null 2>&1
                if [ $? -ne 0 ];then
                    echo "ubimkval failed after ubiformat !!!" >> ${LOG_FILE}
                else
                     mount_update
                     res=$?
                     return $res
                fi
            else
                echo "ubiattach failed after ubiformat" >> ${LOG_FILE}
                return 3
            fi
        fi
    fi
}

function set_marker()
{
    flash_erase /dev/mtd0 0x1B00000 0x1 > /dev/null
}

check0p3=`cat /etc/mtab | grep "ubi1"`
if [ ""x = "$check0p3"x ] ; then
    echo "mounting update"
    prepare_ubifs
    res=$?
    if [ $res -ne 0 ]; then
        return 7
    fi
else
    echo "mount update already"
fi
rm -rf /tmp/updatedata/*
cp $FILE /tmp/updatedata/update.bmu
sync
umount /tmp/updatedata/ > /dev/null
set_marker
return 0
