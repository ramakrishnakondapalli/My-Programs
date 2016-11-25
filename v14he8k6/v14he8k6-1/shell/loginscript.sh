#!/bin/bash
 let times=$(who | grep $1 )
echo" $1 is logged on $times times"
