#!/bin/sh -e

n=$(find /nvdata -type d | grep "^/nvdata/[0-9][0-9][0-9][0-9]-[0-1][0-9]/[0-3][0-9]$" | wc -l)
echo ""

if [ -d '/nvdata' ] && [ $n -gt 0 ];then
    log_list=$(echo '['\"`find /nvdata -type d | grep "^/nvdata/[0-9][0-9][0-9][0-9]-[0-1][0-9]/[0-3][0-9]$" | cut -c 8-`\"] | sed 's/ /","/g')
    echo "{\"dlog\": true, \"log_list\": ${log_list}}"
else
    echo "{\"dlog\": false}"
fi
