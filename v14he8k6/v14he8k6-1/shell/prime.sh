echo "Enter a number"
read number1
 i=2
 cnt=0
while [ $i -lt $number1 ]
do
    #echo "i is :$i "
     let j=`expr $number1%$i `
    #echo "j is :$j "
 if [  $j -eq 0 ]
  then
    let cnt=$cnt+1
   fi
     let  i=$i+1
done
    #echo "cnt is :$cnt "
  if [ $cnt -eq 0 ]
   
  then
       echo "given number is  prime"
   else 
        echo "given number is  not prime"
  fi
   
