#!/bin/sh -e

rm /tmp/backup.log
touch /tmp/backup.log 
echo "backup log test" >> /tmp/backup.log

bkup_content=`cat /dev/stdin`

echo $bkup_content >> /tmp/backup.log


# CGI output must start with at least empty line (or headers)
printf "Content-type: text/html\r\n\r\n"

exec 2>&1

bkup_files=`echo ${bkup_content%antminer_log_backup_*}`
tarnamesuffix=`echo ${bkup_content#*antminer_log_backup_}`
file="antminer_log_backup_$tarnamesuffix"
echo "backup files: $bkup_files" >> /tmp/backup.log
echo "tar file name: $file" >> /tmp/backup.log

rm_filelist=`find /dev/ -name "antminer_log_backup_*"`
if [ ! -z "$rm_filelist" ];     then
  for rm_file in $rm_filelist;         do
      rm -rf $rm_file;
  done;      
fi
           
if [ -n "$bkup_files" ]; then
  tar hcf /dev/$file $bkup_files
  echo "tar hcf /dev/$file $bkup_files" >> /tmp/backup.log
  ln -s /dev/$file /www/pages/log/$file
fi
if [ $? -ne 0 ] ; then
    exit
fi

if [ ! -f "/dev/$file" ]; then
    exit
fi

