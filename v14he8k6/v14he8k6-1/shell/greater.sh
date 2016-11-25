#!/bin/bash
if [ $# -lt 4 ]
echo "Enter Three Arguements"
if [ $1 -gt $2 ]
  then 
     if [ $1 -gt $3 ]
        then
           echo " $1  is the greater number "
      else
           echo " $3 is the greater number "
 elif [ $2 -gt $3 ]
      then
          echo " $2 is greater number "
 else
      echo "$3 is greater number "
