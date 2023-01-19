0x0F. C - Function pointers


0. Write a function that prints a name.


	i. Prototype: void print_name(char *name, void (*f)(char *));


1. Write a function that executes a function given as a parameter on each element of an array.


	i. Prototype: void array_iterator(int *array, size_t size, void (*action)(int));

	ii. where size is the size of the array

	iii. and action is a pointer to the function you need to use


2. Write a function that searches for an integer.


	i. Prototype: int int_index(int *array, int size, int (*cmp)(int));

	ii. where size is the number of elements in the array array

	iii. cmp is a pointer to the function to be used to compare values

	iv. int_index returns the index of the first element for which the cmp function does not return 0

	v. If no element matches, return -1, If size <= 0, return -1


3. Write a program that performs simple operations.


	i. Usage: calc num1 operator num2

	ii. You can assume num1 and num2 are integers, so use the atoi function to convert them from the string input to int

	iii. if the number of arguments is wrong, print Error, followed by a new line, and exit with the status 98

	iv. if the operator is none of the above, print Error, followed by a new line, and exit with the status 99

	v. if the user tries to divide (/ or %) by 0, print Error, followed by a new line, and exit with the status 100

This task requires that you create four different files.


	1. 3-calc.h

	2. 3-op_functions.c

	3. 3-get_op_func.c

	4. 3-main.c



4. Write a program that prints the opcodes of its own main function.


	i. Usage: ./main number_of_bytes

	ii. output format:

		a. the opcodes should be printed in hexadecimal, lowercase

		b. each opcode is two char long

		c. listing ends with a new line

	iii. You are allowed to use printf and atoi :  use atoi to convert the argument to an int

	iv. If the number of argument is not the correct one, print Error, followed by a new line, and exit with the status 1

	iv. If the number of bytes is negative, print Error, followed by a new line, and exit with the status 2.


