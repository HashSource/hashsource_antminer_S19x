#!/bin/bash

echo "Content-type: application/json"
echo ""

FILE="/nvdata/pool/pool.json"
PUB_FILE="/etc/bitmain-adv.pub"

if [ -f "$PUB_FILE" ];then
    if [ -f "$FILE" ]; then
        echo -n '{"status": "success", "message": "Support pool protect, and enable.", "data": '
        cat "$FILE"
        echo '}'
    else
        echo '{"status": "warning", "message": "Suppot pool protect, but disable"}'
    fi
else
    echo '{"status": "error", "message": "No Suppot Pool Protect."}'
fi
