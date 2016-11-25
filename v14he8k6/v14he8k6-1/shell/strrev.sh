
echo "Enter string"
read str
n=${#str}-1
i=$n
j=0
#echo  ${str:0:1} 
while [  $i -gt $j  ]
do
#echo ${str:$n:1}
reverse=$reverse${str:$n:1}
#echo  $reverse 
  n=$n-1
#echo $i
  #i=$i-1
 
done
echo $reverse
