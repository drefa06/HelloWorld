#!/usr/bin/perl
$hello = "Hello";
print ("Enter your age: ");
my $age = <>;
chomp $age; #Needed to remove the ending '\n'

print ("Enter your name: ");
my $name = <>;
chomp $name;

print ("$hello $name You are $age old.\n");

