#!/bin/sh
#必须是bash


mkdir /tmp/card/d_sbt_1101


count=0
while [ $count -lt 10 ]
do 


#............................base pt2..........................................
echo "chain 0 test  start...ch0_$count.log"
/tmp/card/./sbt_1101  0   > /tmp/card/d_sbt_1101/ch0_$count.log
sleep 120

echo "chain 1 test  start...ch0_$count.log"
/tmp/card/./sbt_1101  1   > /tmp/card/d_sbt_1101/ch1_$count.log
sleep 120

echo "chain 2 test  start...ch0_$count.log"
/tmp/card/./sbt_1101  2   > /tmp/card/d_sbt_1101/ch2_$count.log
sleep 120
#......................................................................


count=$((count+1))
done


