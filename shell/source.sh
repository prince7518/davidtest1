#!/bin/sh

my_msg="hello world, my pid is: $$"
echo "$0 my_msg is: $my_msg"
. ./lib.sh
echo lib_msg is: $lib_msg
