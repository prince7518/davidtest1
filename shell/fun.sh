#!/bin/sh

myfoo()
{
	echo "arg1 $1"
	echo "arg2 $2"
	return 3
}

myfoo "hi foo"
myfoo hi foo
echo "myfoo return $?"
echo "main $1"
echo "main $2"

