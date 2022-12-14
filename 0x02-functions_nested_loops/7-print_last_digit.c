#include "main.h"

/**
 * print_last_digit - last digit of a number
 * @nld: number to be checked
 * Return: 0
 */
int print_last_digit(int nld)
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
