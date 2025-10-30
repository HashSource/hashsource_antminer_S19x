#!/bin/sh -e
start=
line=
cr=
fileNum=
num=
folder=/tmp/$$
file=$folder/update.bmu
err_flag=
stats="error"
trap atexit 0

atexit() {
    rm -rf $file
    sync
}

mkdir $folder
cd $folder

exec 2>/tmp/upgrade_result

CR=`printf '\r'`
IFS=$CR 

read -r start
num=$(echo "$start" | wc -m)
let num=num+5
read -r line

while [ -n "$line" ]; do
    read -r line
done

IFS=

cat - >> $file

fileNum=`cat $file | wc -m`
let fileNum=fileNum-$num

truncate -s $fileNum $file

/usr/sbin/daemonc $file

err_flag=$?

if [ $err_flag -eq 0 ]; then
    msg="OK!"
    stats="success"
else
    msg="Fail!"
fi

echo "{\"stats\":\"$stats\",\"code\":\"U00$err_flag\",\"msg\":\"$msg\"}"

if [ $err_flag -eq 0 ]; then
	echo 3 > /tmp/miner_act
fi