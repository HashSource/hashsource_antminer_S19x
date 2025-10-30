#!/bin/sh
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

function check_param()
{
	hash=`echo -n "root:antMiner Configuration:$curr_pw" | md5sum | cut -b -32`
	echo "root:antMiner Configuration:$hash" > /tmp/validate_pw.tmp.$$
	diff /config/lighttpd-htdigest.user /tmp/validate_pw.tmp.$$ > /dev/null
	if [ "$?" -ne "0" ] ; then
		return 1
	fi

	if [ "$new_pw" = "" ] ; then
		return 2
	fi

	if [ "$new_pw_ctrl" = "" ] ; then
		return 3
	fi

	if [ "$new_pw" != "$new_pw_ctrl" ] ; then
		return 4
	fi

	return 0
}

curr_pw=
new_pw="1"
new_pw_ctrl="2"
stats="error"
err_flag=0
msg=

cgi_get_POST_vars

curr_pw=`echo $QUERY_STRING_POST | jq -r ".curPwd"`
new_pw=`echo $QUERY_STRING_POST | jq -r ".newPwd"`
new_pw_ctrl=`echo $QUERY_STRING_POST | jq -r ".confirmPwd"`

check_param
err_flag=$?

if [ $err_flag -eq 0 ]; then
    msg="OK!"
    stats="success"
fi
if [ $err_flag -eq 1 ]; then
	msg="Current password invalid!"
fi
if [ $err_flag -eq 2 ]; then
	msg="New password is null!"
fi
if [ $err_flag -eq 3 ]; then
	msg="Confirm password is null!"
fi
if [ $err_flag -eq 4 ]; then
	msg="New Password does not match!"
fi

update_network_conf_file
sync&

echo "{\"stats\":\"$stats\",\"code\":\"P00$err_flag\",\"msg\":\"$msg\"}"

sleep 1

# Apply the new password
if [ $err_flag -eq 0 ] ; then
	# Create new lighttpd-htdigest.user file
	hash=`echo -n "root:antMiner Configuration:$new_pw" | md5sum | cut -b -32`
	echo "root:antMiner Configuration:$hash" > \
	/config/lighttpd-htdigest.user

#	printf "$new_pw\n$new_pw_ctrl" | passwd root > /dev/null
#	if [ $? -eq 0 ] ; then
#	    rm -f /config/shadow
#		mv /etc/shadow /config/shadow
#		ln -s /config/shadow /etc/shadow
#    fi
fi
