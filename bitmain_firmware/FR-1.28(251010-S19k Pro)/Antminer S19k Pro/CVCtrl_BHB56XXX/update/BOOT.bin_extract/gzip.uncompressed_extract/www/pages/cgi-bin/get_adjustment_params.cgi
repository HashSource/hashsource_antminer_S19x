echo
echo
if [ -f /etc/topol.conf ]
then
    hashrate_percent_min=`cat /etc/topol.conf | jq -r .adjust_strategy.hashrate_percent_min`
    hashrate_percent_max=`cat /etc/topol.conf | jq -r .adjust_strategy.hashrate_percent_max`

else
    hashrate_percent_min=65
    hashrate_percent_max=100
fi

echo "{\"hashrate_percent_min\": \"$hashrate_percent_min\", \"hashrate_percent_max\": \"$hashrate_percent_max\"}"
