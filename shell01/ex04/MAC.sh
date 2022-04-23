#! /bin/sh
	ifconfig | awk '$1 == "ether" { print $2, " " $3, $4, " " $5 }' 
