#!/usr/bin/env python
# -*- coding: utf-8 -*-

import sys #needed to print char by char

hello = "Hello";

age = int(raw_input("Enter your age: "))
name = raw_input("Enter your name: ")

#print
print("{} '{}' You are {} years old".format(hello,name,age)) #automatically put a new line at the end

