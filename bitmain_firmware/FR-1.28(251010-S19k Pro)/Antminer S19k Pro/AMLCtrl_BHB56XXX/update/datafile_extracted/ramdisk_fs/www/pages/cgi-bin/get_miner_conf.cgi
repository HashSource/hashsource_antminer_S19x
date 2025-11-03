echo
echo
if [ ! -f /config/cgminer.conf ] ; then
    cp /config/cgminer.conf.factory /config/cgminer.conf
fi

third_line=$(awk 'NR==3' /usr/bin/compile_time)
if [[ "$third_line" == "Release" ]]; then
    miner_type=`cat /usr/bin/compile_time  | sed -n '2p'`

    if [[ "$miner_type" == "Antminer T21" ]] || [[ "$miner_type" == "Antminer S21" ]] || [[ "$miner_type" == "Antminer S21 Pro" ]] ||  [[ "$miner_type" == "Antminer S19 XP+" ]] || [[ "$miner_type" == "Antminer E9 Pro+" ]] || [[ "$miner_type" == "Antminer S21 XP" ]]; then
        jq '{pools,"bitmain-fan-ctrl","bitmain-fan-pwm", "bitmain-work-mode", "bitmain-hashrate-percent", "bitmain-user-ip-cat"}' /config/cgminer.conf
    else
        jq '{pools,"bitmain-fan-ctrl","bitmain-fan-pwm", "bitmain-work-mode", "bitmain-hashrate-percent"}' /config/cgminer.conf
    fi
else
    cat /config/cgminer.conf
fi