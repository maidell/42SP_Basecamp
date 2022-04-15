#!/bin/sh
ifconfig | awk '/Ethernet/{print $2"  " $3" " $4"  " $5}'