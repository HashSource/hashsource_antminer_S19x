#!/bin/sh

function cgi_get_POST_vars()
{
    # check content type
    # FIXME: not sure if we could handle uploads with this..
    [ "${CONTENT_TYPE}" != "application/x-www-form-urlencoded" ] && \
    echo "Warning: you should probably use MIME type "\
         "application/x-www-form-urlencoded!" 1>&2
    # save POST variables (only first time this is called)
    [ -z "$QUERY_STRING_POST" \
      -a "$REQUEST_METHOD" = "POST" -a ! -z "$CONTENT_LENGTH" ] && \
    read -n $CONTENT_LENGTH QUERY_STRING_POST
    return
}

function update_network_conf_file()
{
    config_file="/config/network.conf"
    if [ "${ant_conf_nettype}" == "1" ]; then
        echo "dhcp=true"                                >  $config_file
        echo "hostname=${ant_conf_hostname}"            >> $config_file
    else
        echo "hostname=${ant_conf_hostname}"            >  $config_file
        echo "ipaddress=${ant_conf_ipaddress}"          >> $config_file
        echo "netmask=${ant_conf_netmask}"              >> $config_file
        echo "gateway=${ant_conf_gateway}"              >> $config_file
        echo "dnsservers=${ant_conf_dnsservers}"        >> $config_file 
    fi
}

function check_param()
{
    if ! echo "$ant_conf_hostname" | egrep -q "$regex_hostname"; then
        return 1 
    fi

    if [ "${ant_conf_nettype}" == "2" ]; then
        if ! echo "${ant_conf_ipaddress}" | egrep -q "$regex_ip"; then
            return 2
        fi
        if ! echo "${ant_conf_netmask}" | egrep -q "$regex_ip" ; then
            return 3
        fi
        if ! echo "${ant_conf_gateway}" | egrep -q "$regex_ip"; then
            return 4
        fi
        if ! echo "${ant_conf_dnsservers}" | egrep -q "$regex_ip"; then
            return 5
        fi
    fi
    return 0
}

ant_conf_nettype=
ant_conf_hostname=
ant_conf_ipaddress=
ant_conf_netmask=
ant_conf_gateway=
ant_conf_dnsservers=
stats="error"
err_flag=0
msg=

regex_ip="^[0-9]{1,3}\.[0-9]{1,3}\.[0-9]{1,3}\.[0-9]{1,3}$"
regex_hostname="^(([a-zA-Z]|[a-zA-Z][a-zA-Z0-9-]*[a-zA-Z0-9])\.)*([A-Za-z]|[A-Za-z][A-Za-z0-9-]*[A-Za-z0-9])$"

cgi_get_POST_vars
#echo $QUERY_STRING_POST > /tmp/a
#QUERY_STRING_POST=`cat /tmp/a`
ant_conf_nettype=`echo $QUERY_STRING_POST | jq -r ".ipPro"`
ant_conf_hostname=`echo $QUERY_STRING_POST | jq -r ".ipHost"`
if [ "${ant_conf_nettype}" == "2" ];then
    ant_conf_ipaddress=`echo $QUERY_STRING_POST | jq -r ".ipAddress"`
    ant_conf_netmask=`echo $QUERY_STRING_POST | jq -r ".ipSub"`
    ant_conf_gateway=`echo $QUERY_STRING_POST | jq -r ".ipGateway"`
    ant_conf_dnsservers=`echo $QUERY_STRING_POST | jq -r ".ipDns"`
fi

check_param
err_flag=$?

if [ $err_flag -eq 0 ]; then
    msg="OK!"
    stats="success"
fi
if [ $err_flag -eq 1 ]; then
    msg="Hostname invalid!"
fi
if [ $err_flag -eq 2 ]; then
    msg="IP invalid!"
fi
if [ $err_flag -eq 3 ]; then
    msg="Netmask invalid!"
fi
if [ $err_flag -eq 4 ]; then
    msg="Gateway invalid!"
fi
if [ $err_flag -eq 5 ]; then
    msg="DNS invalid!"
fi

echo "{\"stats\":\"$stats\",\"code\":\"N00$err_flag\",\"msg\":\"$msg\"}"

if [ $err_flag -eq 0 ];then
    update_network_conf_file
    sync
    sleep 1s
    sudo /etc/init.d/S38network restart > /dev/null 2>&1 &
fi



