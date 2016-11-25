#!/bin/bash
x=$1
y=$2
  
  echo "Entered string1: $x "
  echo "Entered string2: $y "
   n1=${#x}
   n2=${#y}
while [ $n1 -ge 0 ]
 do
    if [ ${x:$n1-1:1} -ne ${y:$n2-1:1} ]
        # (( n1-- ))
       then
        echo -n " Entered string are not equal "
       let n1=$n1-1
       
    fi
done 

 if [ $1 = $2 ]
then
  echo "Entered strings are equal "
 else
  echo "Entered strings are not equal "
 
 fi

  
