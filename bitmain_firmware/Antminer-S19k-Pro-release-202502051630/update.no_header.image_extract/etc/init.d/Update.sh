#!/bin/sh -e

function spliteFile(){
    if [ -d /tmp/tmpfw ]; then
        rm /tmp/tmpfw -rf
    fi
    mkdir /tmp/tmpfw
    /usr/bin/FileParser -s S19 $1  /etc/bitmain.pub
    res=$?
    if [ $res -ne 0 ]; then
        echo "BMU CHECK FAILED!"
    fi
    return $res
}

function checkFile(){
    cd /tmp/tmpfw
    if [ ! -f miner.pem ]; then
        echo "Cannot Find Miner!"
        return 1
    fi
    if [ ! -f miner.pem.sig ]; then
        echo "Cannot Find Miner Signature"
        return 2
    fi
    openssl dgst -sha256 -verify /etc/bitmain.pub -signature miner.pem.sig miner.pem > /dev/null
    res=$?
    if [ $res -ne 0 ]; then
        echo "Check Miner Signature Failed!"
        return 3
    fi

    srcFile="BOOT.bin devicetree.dtb uImage minerfs.image.gz update.image.gz crl.tar.gz miner.btm.tar.gz"
    for file in ${srcFile};
    do
        sigFile="${file}.sig"
        if [ -f ${file} ]; then
            if [ ! -f ${sigFile} ]; then
                echo "Cannot Find ${sigFile} !"
                return 1
            else
                openssl dgst -sha256 -verify miner.pem -signature ${sigFile} ${file}  > /dev/null
                res=$?
                if [ $res -ne 0 ]; then
                    echo "Check ${file} Signature Failed!"
                    return 2
                fi
            fi
        fi
    done

    if [ -f crl.tar.gz ]; then
        tar zxvf crl.tar.gz >/dev/null 2>&1
        if [ ! -f crl.sig ]; then
            echo "Cannot Find crl.sig"
            return 3
        fi
        openssl dgst -sha256 -verify /etc/bitmain.pub -signature crl.sig crl  > /dev/null
        res=$?
        if [ $res -ne 0 ]; then
            echo "Check CRL Signture Failed!"
            return 4
        fi
    fi

    if [ -f miner.btm.tar.gz ]; then
        tar zxvf miner.btm.tar.gz >/dev/null 2>&1
        if [ ! -f miner.btm.sig ]; then
            echo "Cannot Find miner.btm.sig"
            return 5
        fi

        openssl dgst -sha256 -verify /etc/bitmain.pub -signature miner.btm.sig miner.btm  > /dev/null
        res=$?
        if [ $res -ne 0 ]; then
            echo "Check miner.btm Signture Failed!"
            return 6
        fi
    fi
}

function writeToNand(){
    cd /tmp/tmpfw/
    if [ -f sigImage ]; then
        echo "write sigImage to nand"
        flash_erase /dev/mtd3 0x0 0x08 >/dev/null
        nandwrite -p -s 0x0 /dev/mtd3 sigImage >/dev/null

        echo "write sigImage backup1 to nand"
        flash_erase /dev/mtd3 0x100000 0x08 >/dev/null
        nandwrite -p -s 0x100000 /dev/mtd3 sigImage >/dev/null
    else
        echo "sigImage do not exist!"
        return 7
    fi

    if [ -f BOOT.bin ]; then
        echo "write boot.bin to nand"
        flash_erase /dev/mtd0 0x0 0x40 >/dev/null
        nandwrite -p -s 0x0 /dev/mtd0 BOOT.bin >/dev/null

        echo "write boot.bin backup1 to nand"
        flash_erase /dev/mtd0 0x800000 0x40 >/dev/null
        nandwrite -p -s 0x800000 /dev/mtd0 BOOT.bin >/dev/null

        echo "write boot.bin backup2 to nand"
        flash_erase /dev/mtd0 0x1000000 0x40 >/dev/null
        nandwrite -p -s 0x1000000 /dev/mtd0 BOOT.bin >/dev/null
    fi

    if [ -f devicetree.dtb ]; then
        echo "write dtb to nand"
        flash_erase /dev/mtd0 0x1A00000 0x1 >/dev/null
        nandwrite -p -s 0x1A00000 /dev/mtd0 devicetree.dtb >/dev/null
    fi

    if [ -f uImage ]; then
        echo "write uImage to nand"
        flash_erase /dev/mtd0 0x2000000 0x40 >/dev/null
        nandwrite -p -s 0x2000000 /dev/mtd0 uImage >/dev/null
    fi

    if [ -f minerfs.image.gz ]; then
        echo "write miner fs to nand"
        flash_erase /dev/mtd1 0x0 0x0 >/dev/null
        nandwrite -p -s 0x0 /dev/mtd1 minerfs.image.gz >/dev/null
    fi

    if [ -f update.image.gz ]; then
        echo "write update fs to nand"
        flash_erase /dev/mtd5 0x0 0x0 >/dev/null
        nandwrite -p -s 0x0 /dev/mtd5 update.image.gz >/dev/null
    fi
    echo "----------write all update files over---------------"
}


function makeSigImg() {
    cd /tmp/tmpNand
    fileList="miner.btm miner.btm.sig crl crl.sig minerfs.image.gz.sig update.image.gz.sig uImage.sig devicetree.dtb.sig"

    for file in ${fileList};
    do
        rFile="/tmp/tmpfw/${file}"
        if [ -f ${rFile} ]; then
            cp ${rFile} ./
        fi
    done

    FileParser -q

    cp devicetree.dtb.sig sigImage
    cat /tmp/256BFF >> sigImage
    cat uImage.sig >> sigImage
    cat /tmp/256BFF >> sigImage
    cat minerfs.image.gz.sig >> sigImage
    cat /tmp/256BFF >> sigImage
    cat update.image.gz.sig >> sigImage
    cat /tmp/256BFF >> sigImage
    cat miner.btm.sig >> sigImage
    cat /tmp/256BFF >> sigImage
    cat crl.sig >> sigImage
    cat /tmp/256BFF >> sigImage
    cat 7kreserve >> sigImage
    cat miner.btm >> sigImage
    cat crl >> sigImage
    cp sigImage /tmp/tmpfw/
}

function spliteNandSigImg() {
    ## TODO: Dump Nand Data
    dd if=/dev/mtd3 of=/tmp/nandBin bs=128k count=1
    if [ -d /tmp/tmpNand ]; then
        rm /tmp/tmpNand -rf
    fi

    mkdir /tmp/tmpNand
    ## TODO: Splite Nand Data
    /usr/bin/FileParser -n /tmp/nandBin 
    res=$?
    if [ ${res} -ne 0 ]; then
        echo "Split Nand Image Failed!"
        return 6
    fi
}


#clen update marker
#dd if=/dev/urandom of=/tmp/tdata bs=128k count=1
#nandwrite  -p -s 0x1B00000 /dev/mtd0 /tmp/tdata
# Split Update File

if [ -z $1 ]; then
	echo "Wrong Param"
	return 99
fi
srcFile=$1/update.bmu
spliteFile ${srcFile}
res=$?
if [ ${res} -ne 0 ]; then
	echo "Splite Bmu Failed!${res}"
	return 98
fi


#Check Splited Data
checkFile
res=$?
if [ $res -ne 0 ]; then
    echo "Check Data Failed!$res"
    return $res
fi

#Dump Nand Sig Data
spliteNandSigImg

#Make New SigData
makeSigImg

#Write Each Part To Nand
writeToNand

