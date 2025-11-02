echo "$(date '+%Y-%m-%d %H:%M:%S') the reboot command was called" >> /var/log/miner.log
echo "$(date '+%Y-%m-%d %H:%M:%S') the reboot command was called" >> /nvdata/log/miner/miner.log
echo "Status 200"
echo 2 > /tmp/miner_act