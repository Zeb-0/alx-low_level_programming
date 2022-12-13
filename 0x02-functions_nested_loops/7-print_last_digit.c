#include "main.h"

/**
 * main - last digit of a number
 * @n: number to be checked
 * Return: 0
 */
int print_last_digit(int n)
{
	int ld;

	ld = n % 10;
	if (ld > 0)
	{
		ld *= -1;
		_putchar(ld + '0');
	}
	return (ld);
}
