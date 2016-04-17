#!/bin/bash

var="hello peter"
echo "var is ${var#hel}"
echo "var is ${var#ahel}"

#echo ${var##hello}
#${var/pattern/sub_str}{var//pattern/sub_str}{var/#pattern/sub_str}{var/%pattern/sub_str}
echo "---"

abc23=something_else
b=${!abc*}
echo "b = $b"      #  b = abc23
c=${!b}            #  Now, the more familiar type of indirect reference.
echo $c            #  something_else

