echo
echo
echo "===========================================pool protect log==========================================="
cat /nvdata/update.log | sed '/^$/d' | grep id