#!/bin/bash
read -p "Enter string1:" str1
read -p "Enter string2:" str2
len1=${#str1}
len2=${#str2}
i=0
while [ $i -lt $len1 ]
do
if [ ${str1:$i:1} -ne ${str2:$i:1}]
then  
 echo -n "Entered two strings are not equal"
 break
fi
let i=$i+1
done

