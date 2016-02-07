#!/bin/sh
#
# Copyright (C) 2014 Jolla Ltd.
# Contact: Simonas Leleiva <simonas.leleiva@jollamobile.com>
#

# This waits for bacon WLAN firmware to be provided by conn_init

while [ ! -e /data/misc/wifi/WCNSS_qcom_cfg.ini ]; do
    sleep 1
    echo "...waiting for wlan firmware to appear: WCNSS_qcom_cfg.ini"
done
echo "...waiting for services to settle"
sleep 10
/sbin/modprobe pronto_wlan
