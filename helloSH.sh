#!/bin/bash

hello="hello"

echo -n "Enter your age: "
read age

echo -n "Enter your Name: "
read name

#print
echo "${hello} '${name}' You are ${age} years old"

#concatenation and print char by char
reponse="${hello} '${name}' You are ${age} years old"
for (( i=0; i<${#reponse}; i++ )); do
  echo -n "${reponse:$i:1}"
done
echo ""


