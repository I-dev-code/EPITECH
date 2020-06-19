#!/bin/bash
if [ $1 ]
then
    grep -ciw $1
else
    wc -l
fi
