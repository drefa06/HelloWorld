BEGIN {
	printf "Enter your age: "
	getline age < "-"

	printf "Enter your name: "
	getline name < "-"

	print RS "Hello '"name"' you are "age" years old"
}
