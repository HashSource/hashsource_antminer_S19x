#!/bin/sh
echo
echo
blink=0
blinkfile="/tmp/miner_act"
if [ -f $blinkfile ];then
    blink=`cat $blinkfile`
    if [ $blink == 1 ];then
        echo "{\"blink\":true}"
    else
        echo "{\"blink\":false}"
    fi
else
    echo "{\"blink\":false}"
fi