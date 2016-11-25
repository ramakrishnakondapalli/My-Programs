#!/bin/bash
echo "Enter string"
read str
n=0;len=${#str}
#echo ${str:2:1}
#echo  ${str:0: $i } 
for (( i=$len-1; i>=0; i-- ))
do
      reverse=$reverse${str:$i:1}
echo $reverse
done
echo $reverse
