#!/bin/bash
i=1
for day in mon tue wed thu fri
do
	echo "$(( i++ )) : $day"
done