#include "main.h"
/**
 * main - 10x alphabets
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int n = 0;

	while (n < 10)
	{
		char c;

		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		n++;
		_putchar('\n');
	}
	return (0);
}
