0x10-variadic_functions


0. Write a function that returns the sum of all its parameters.

	i.Prototype: int sum_them_all(const unsigned int n, ...);

	ii. If n == 0, return 0

1. Write a function that prints numbers, followed by a new line.

	i. Prototype: void print_numbers(const char *separator, const unsigned int n, ...);

	ii. where separator is the string to be printed between numbers

	iii. and n is the number of integers passed to the function

	iv. If separator is NULL, don’t print it

	v. Print a new line at the end of your function

2. Write a function that prints strings, followed by a new line.

	i. Prototype: void print_strings(const char *separator, const unsigned int n, ...);

	ii. where separator is the string to be printed between the strings and n is the number of strings passed to the function

	iii. If separator is NULL, don’t print it : If one of the string is NULL, print (nil) instead

	iv. Print a new line at the end of your function

3. Write a function that prints anything.

	i. Prototype: void print_all(const char * const format, ...);

	ii. where format is a list of types of arguments passed to the function

		a. c: char

		b. i: integer

		c. f: float

		d. s: char * (if the string is NULL, print (nil) instead

		e. any other char should be ignored

	iii. You are not allowed to use for, goto, ternary operator, else, do ... while

	iv. You can use a maximum of

		a. 2 while loops

		b. 2 if

	v. You can declare a maximum of 9 variables

	vi. You are allowed to use printf

	vii. Print a new line at the end of your function
