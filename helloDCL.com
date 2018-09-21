$!++
$! Hello in DCL (Digital Command Line) for OpenVMS

$ hello == "Hello"
$
$ inquire/nopunctuation age "Enter your age: "
$ inquire/nopunctuation name "Enter your name: "
$
$ write sys$output "''hello'' ''name'' you are ''age'' old."
