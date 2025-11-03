#!/bin/sh
set -x
echo
echo
blinkfile="/tmp/miner_act"
function cgi_get_POST_vars()
{
    [ "${CONTENT_TYPE}" != "application/x-www-form-urlencoded" ] && \
    echo "Warning: you should probably use MIME type "\
         "application/x-www-form-urlencoded!" 1>&2
    [ -z "$QUERY_STRING_POST" \
      -a "$REQUEST_METHOD" = "POST" -a ! -z "$CONTENT_LENGTH" ] && \
    read -n $CONTENT_LENGTH QUERY_STRING_POST
    return
}

function parse_blink_setting()
{
    ret=`echo $QUERY_STRING_POST | grep -E ".*?\"blink\".*?true"`
	if [ "$ret"x != ""x ];then
        return 0
    else
        ret=`echo $QUERY_STRING_POST | grep -E ".*?\"blink\".*?false"`
        if [ "$ret"x != ""x ];then
            return 1
        else
            return 2
        fi
    fi  
}

cgi_get_POST_vars

if [ ! "$QUERY_STRING_POST"x == ""x ]; then
    `parse_blink_setting`
    ret=$?
    if [ "$ret"x == "0"x ];then
    	echo 1 > $blinkfile
        echo "{\"code\":\"B000\"}"
    elif [ "$ret"x == "1"x ];then
    	echo 0 > $blinkfile
        echo "{\"code\":\"B100\"}"
    else
    	echo "{\"code\":\"B001\"}"
    fi
else
    echo "{\"code\":\"B001\"}"
fi