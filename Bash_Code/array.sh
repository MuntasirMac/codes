#!/bin/bash

#let's declare an array of 3 elements
array=( 'Hello Scientific' Programming ! )

elements=${#array[@]}

echo "Total elements: "$elements

for i in "${array[@]}"; do
	#statements
	echo $i
done