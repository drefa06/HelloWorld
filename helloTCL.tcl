#!/usr/bin/tclsh
set hello "Hello"

puts -nonewline "Enter your age: "
flush stdout
set age [gets stdin]

puts -nonewline "Enter your name: "
flush stdout
set name [gets stdin]

puts "$hello '$name' you are $age old"
