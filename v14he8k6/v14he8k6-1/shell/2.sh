
#!bin/bash
 for file in $*
 if [ -d  $file ]
 then
  echo " wc $file is "
    wc $file

else
  echo "$fie is a directory"  
fi
  done 

