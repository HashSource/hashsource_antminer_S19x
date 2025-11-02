#!/bin/sh
echo
echo

# Read network configuration
ant_minertype=
ant_nettype=
ant_netdevice=
ant_macaddr=
ant_hostname=
ant_ipaddress=
ant_netmask=
ant_gateway=
ant_dnsservers=
ant_fmtype=
ant_serinum=

if [ -s /config/network.conf ] ; then
        ant_nettype=`cat /config/network.conf | grep dhcp`
        if [ -z ant_nettype ]; then
                ant_nettype="dhcp=false"
        fi
        ant_nettype=${ant_nettype/dhcp=/}
        if [ "${ant_nettype}" == "true" ]; then
                ant_nettype=DHCP
        else
                ant_nettype=Static
        fi

        ant_host_name=`cat /config/network.conf | grep hostname`
        ant_host_name=${ant_host_name/hostname=/}
        ant_ipaddress=`cat /config/network.conf | grep ipaddress`
        ant_ipaddress=${ant_ipaddress/ipaddress=/}
        ant_netmask=`cat /config/network.conf | grep netmask`
        ant_netmask=${ant_netmask/netmask=/}
        ant_gateway=`cat /config/network.conf | grep gateway`
        ant_gateway=${ant_gateway/gateway=/}
        ant_dnsservers=`cat /config/network.conf | grep dnsservers`
        ant_dnsservers=${ant_dnsservers/dnsservers=/}
        ant_dnsservers=${ant_dnsservers//\"/}
fi

ant_tmp=`ifconfig | grep eth`
i=0
for ant_var in ${ant_tmp}
do
        case ${i} in
                0 )
                ant_netdevice=${ant_var}
                ;;
                4 )
                ant_macaddr=${ant_var}
                ;;
        esac
        i=`expr $i + 1`
done

ant_tmp=`ifconfig | grep "inet addr"`
i=0
for ant_var in ${ant_tmp}
do
        case ${i} in
                1 )
                ant_ipaddress=${ant_var}
                ant_ipaddress=${ant_ipaddress/addr:/}
                ;;
                3 )
                ant_netmask=${ant_var}
                ant_netmask=${ant_netmask/Mask:/}
                ;;
        esac
        i=`expr $i + 1`
done

ant_system_mode=`uname -o`
ant_system_kernel_version=`uname -srv`
#ant_system_filesystem_version=`cat /usr/bin/compile_time`
ant_minertype=`sed -n 2p /usr/bin/compile_time`
ant_system_filesystem_version=`sed -n 1p /usr/bin/compile_time`
ant_fmtype=`sed -n 3p /usr/bin/compile_time`
ant_serinum=`cat /config/sn`

if [ x"$ant_fmtype" == x"" ];then
        ant_fmtype="Unkown"
fi

if [ x"$ant_serinum" == x"" ];then
        ant_serinum="Unknown"
fi

echo {
echo \"minertype\":\"${ant_minertype}\",
echo \"nettype\":\"${ant_nettype}\",
echo \"netdevice\":\"${ant_netdevice}\",
echo \"macaddr\":\"${ant_macaddr}\",
echo \"hostname\":\"${ant_host_name}\",
echo \"ipaddress\":\"${ant_ipaddress}\",
echo \"netmask\":\"${ant_netmask}\",
echo \"gateway\":\"${ant_gateway}\",
echo \"dnsservers\":\"${ant_dnsservers}\",
echo \"system_mode\":\"${ant_system_mode}\",
echo \"system_kernel_version\":\"${ant_system_kernel_version}\",
echo \"system_filesystem_version\":\"${ant_system_filesystem_version}\",
echo \"firmware_type\":\"${ant_fmtype}\",
echo \"serinum\":\"${ant_serinum}\"
echo }

