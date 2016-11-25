#program to read from a file
echo enter file name
read fname
terminal='tty'
exec<$fname
while read line
 do
    echo $line
    echo press any key
     read key<terminal
done
exec<$terminal
