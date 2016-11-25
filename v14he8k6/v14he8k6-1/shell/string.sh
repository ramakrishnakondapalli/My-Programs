#!/bin/bash
echo "Enter string"
read str
i=0;n=0
echo ${#str}
echo "$str"
echo  `expr length "$str"`
echo  `expr index "$str" a`
echo  ${str:0}
echo  ${str:1}
echo  ${str:2}

#while [ -n str[n] ]
#do
# echo $str
# let n=$n+1
#echo $n
# let i=$i+1
#done
#echo $n
