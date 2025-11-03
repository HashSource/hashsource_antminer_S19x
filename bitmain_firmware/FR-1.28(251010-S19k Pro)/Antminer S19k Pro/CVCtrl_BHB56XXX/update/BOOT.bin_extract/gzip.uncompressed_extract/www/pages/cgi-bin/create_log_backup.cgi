#!/bin/sh -e

function cgi_get_POST_vars() {
    [ "${CONTENT_TYPE}" != "application/x-www-form-urlencoded" ] &&
        echo "Warning: you should probably use MIME type " \
            "application/x-www-form-urlencoded!" 1>&2
    [ -z "$QUERY_STRING_POST" \
        -a "$REQUEST_METHOD" = "POST" -a ! -z "$CONTENT_LENGTH" ] &&
        read -n $CONTENT_LENGTH QUERY_STRING_POST
    return
}

cgi_get_POST_vars

log_dir_earliest="/2221-01/01"
log_dir_lastest="/1960-01/01"
log_dir_list=""
for log_dir in $(echo $QUERY_STRING_POST | jq -r ".[]"); do
    if [ ! -d '/nvdata'"$log_dir" ]; then
        echo "{\"stats\":\"error\",\"code\":\"L001\",\"msg\":\"Log dir not found!\"}"
        return
    fi
    log_dir_list=${log_dir_list}" /nvdata"${log_dir}

    earliest=${log_dir_earliest//\//}
    earliest_num=${earliest//-/}
    lastest=${log_dir_lastest//\//}
    lastest_num=${lastest//-/}

    log_time=${log_dir//\//}
    log_time_num=${log_time//-/}

    if [ $log_time_num -lt $earliest_num ]; then
        log_dir_earliest=$log_dir
    fi

    if [ $log_time_num -gt $lastest_num ]; then
        log_dir_lastest=$log_dir
    fi
done

if [ "$log_dir_earliest"x == "/2221-01/01"x ]; then
    echo "{\"stats\":\"error\",\"code\":\"L002\",\"msg\":\"Null request data!\"}"
    return
fi

if [ "$log_dir_earliest"x == "$log_dir_lastest"x ]; then
    log_tar_name="antminer_log"${log_dir_earliest//\//-}".tar"
else
    log_dir_earliest=${log_dir_earliest//\//-}
    log_dir_lastest=${log_dir_lastest//\//-}
    log_tar_name="antminer_log_"${log_dir_earliest/-/}"_"${log_dir_lastest/-/}".tar"
fi

echo ${log_tar_name}${log_dir_list} > /tmp/miner_act
sync

echo "{\"stats\":\"success\",\"code\":\"L000\",\"msg\":\""${log_tar_name}"\"}"

sleep 3s
