#!/bin/bash
TOKENS="hello world"
len=${#TOKENS}
for (( i=$len-1; i>=0; i--))
 do
   #echo $i
   str=$str${str:$i:1}
done
echo $str
