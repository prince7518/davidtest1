#!/bin/sh

for n in /etc/* 
do 
	if [ -f $n ]
then
	echo $n
	fi
done
