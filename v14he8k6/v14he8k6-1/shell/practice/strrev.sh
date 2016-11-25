echo -n  "Enter a string"
read str
n=${#str}
echo $n
while [ $n -ne 0 ]
do
  rev=$rev${str:$n-1:1}
  (( n-- ))
done

echo "$rev"
