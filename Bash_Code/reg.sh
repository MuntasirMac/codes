#!/bin/bash

input="Hello world!"

if [[ "$input" =~ 'data(.*)' ]]
then
        echo $BASH_REMATCH :  ${BASH_REMATCH[1]}
else 
        echo "NO MATCH!"
fi