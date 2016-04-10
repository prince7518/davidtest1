#!/usr/bin/python

with open("hello.txt") as f:
    for line in f:
        print line,
    print dir(f)

