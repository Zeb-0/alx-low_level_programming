0x0A-argc_argv - Argument count && Argument Vector

0. Write a program that prints its name, followed by a new line.

	i. If you rename the program, it will print the new name, without having to compile it again

	ii. You should not remove the path before the name of the program

1. Write a program that prints the number of arguments passed into it.

	i. Your program should print a number, followed by a new line

2. Write a program that prints all arguments it receives.

	i. All arguments should be printed, including the first one

	ii. Only print one argument per line, ending with a new line

3. Write a program that multiplies two numbers.

	i.  print the result of the multiplication, followed by a new line

	ii.  assume that the two numbers and result of the multiplication can be stored in an integer

	iii.  print Error, followed by a new line, and return 1 if no two arguments are received.

4. Write a program that adds positive numbers.

	i. Print the result, followed by a new line

	ii. print 0 if no number

	iii. If one of the number contains symbols that are not digits, print Error, followed by a new line, and return 1

5. Write a program that prints the minimum number of coins to make change for an amount of money.

	i. Usage: ./change cents - where cents is the amount of cents you need to give back

	ii. if the number of arguments passed to your program is not exactly 1, print Error, followed by a new line, and return 1

	iii. use atoi to parse the parameter passed to your program

	iv. If the number passed as the argument is negative, print 0, followed by a new line

	v. You can use an unlimited number of coins of values 25, 10, 5, 2, and 1 cent
