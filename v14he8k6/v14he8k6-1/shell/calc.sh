
case $2 in
  
     "+")    ans=`expr $1 + $3`
              #printf "Sum of digits are:%d %s %d=%d" $1 $3 $2 $ans
		echo  $1 $2 $3 = $ans;;
      "-")   ans=`expr $1 - $2`
             echo "Subtraction of digits are:%d %s %d=%d"
		echo  $1 $2 $3 $ans;;
      "*")   ans=`expr $1 \* $2`
             echo "Mul of digits are:%d %s %d=%d"
		echo  $1 $2 $3 $ans;;
      "/")   ans=`expr $1 / $2`
             echo "Div of digits are:%d %s %d=%d"
		echo  $1 $2 $3 $ans;;


     esac

   
