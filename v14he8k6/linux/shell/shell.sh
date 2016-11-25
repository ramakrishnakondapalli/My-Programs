#program to read from file  
echo Enter file name
read fname
terminal='tty'
exec<$fname
while read line
do
    echo $line
    echo Press any key
     read key<$terminal
done
exec<$terminal

