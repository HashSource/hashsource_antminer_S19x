#!/bin/sh

if [ ! -f /sys/class/gpio/gpio907 ]
then
    echo 907 > /sys/class/gpio/export
    echo out > /sys/class/gpio/gpio907/direction
fi
echo 1 > /sys/class/gpio/gpio907

reboot
