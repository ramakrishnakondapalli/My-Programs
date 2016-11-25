#!/bin/bash
echo "Enter string"
read str
#len=`echo ${#str} `
len=${#str}
echo $len
while [ $len -ne 0 ]
do
#rev=$rev` echo $str | cut -c $len `
rev=$rev${str:$len-1:1} 
# ((len--))
let len=$len-1
done
echo "reverse:$rev "
