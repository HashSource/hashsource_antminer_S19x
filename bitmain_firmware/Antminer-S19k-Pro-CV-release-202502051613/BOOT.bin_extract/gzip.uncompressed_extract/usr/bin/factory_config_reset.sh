#!/bin/sh

echo "starting recovery factoary"
/etc/init.d/S50dropbear stop
/etc/init.d/S70cgminer stop

cd /config/
rm_files=`ls /config/ | grep -wv mac | grep -wv sn`
rm -rf $rm_files

sync
sleep 50
echo "recovery factory complete, rebooting"

reboot -f
