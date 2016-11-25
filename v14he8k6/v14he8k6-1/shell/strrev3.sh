#!/bin/bash
str="hello world"
len=${#str}
i=0
rev=""
while [ $i -lt $len ]
do
echo $len
rev="$rev${str:$i:1}"
i=$i+1
done
#echo $rev
