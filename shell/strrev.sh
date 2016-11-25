#!/bin/bash
read -p "Enter string:" string
len=${#string}
i=0
while [ $i -lt $len ]
do
# "${string:$i:1}"extract single single character from string.
reverse="$reverse${string:$i:1}"
i=$i+1
done
echo "$reverse"
