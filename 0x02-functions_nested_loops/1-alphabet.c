#include "main.h"
/**
 * main - alphabet
 * Return: 0
 */
int print_alphabet(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
	return (0);
}
