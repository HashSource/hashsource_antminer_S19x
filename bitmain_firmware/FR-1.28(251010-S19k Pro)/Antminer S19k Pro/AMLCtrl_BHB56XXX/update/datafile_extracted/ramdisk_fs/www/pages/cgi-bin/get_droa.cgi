if [ -f /tmp/miner/droa.log ]
then
    echo "==============================Bitmain Miner DROA log========================================="
    droalog=`cat /tmp/miner/droa.log`
    echo "$droalog"
else
    echo "None"
fi

