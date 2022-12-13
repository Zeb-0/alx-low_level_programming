#include "main.h"

/**
 * main - last digit of a number
 * @n: number to be checked
 * Return: 0
 */
int print_last_digit(int n)
{
	int pld;
	pld = (nld % 10);
	if (pld < 0)
	{
		pld = (-1 * pld);
	}
	_putchar(pld + '0');
	return (pld);
}
