#!/bin/bash
echo "Hello world"

myCode="ckczppom"
myNum=0
foo="00000"
while true
    do
        newCode="${myCode}${myNum}"
        x=$(md5 -s $newCode)
        echo $x
        x=${x:19:5}
        if [ "$x" = "00000" ]; then 
            echo myNum
        fi
        myNum=$myNum+1
    done



echo $x
