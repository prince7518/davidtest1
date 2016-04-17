#!/bin/sh

echo ${var:=default}
echo ${var:+default}
echo ${var:-default}
echo ${var:?message}
