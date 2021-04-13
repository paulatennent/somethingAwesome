#!/bin/sh
# this takes a file and tries to make its hash start with 00
match=2
cat file.txt > filealter.txt
i=0
while [ "$i" -lt 10000 ]
do
    hash=$(shasum -a 256 filealter.txt | sed 's/ *filealter.txt//')
    hashvalid=$(echo $hash | egrep "^0{$match}")
    if [ -n "$hashvalid" ]
    then
        echo $hash
        cat filealter.txt > filefinal.txt
        break
    fi
    printf " " >> filealter.txt
    i=$(expr $i + 1)
done