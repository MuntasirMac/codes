#!/bin/bash

i=0
# bash until loop
until [ $i -gt 3 ]; do
        echo "i :" $i
        i=$[$i+1]
done