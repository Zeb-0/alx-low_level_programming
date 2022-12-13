#include <stdio.h>
/**
 * main - 10x alphabets
 * Return: 0
 */
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		char c;

		for (c = 'a'; c <= 'z'; c++)
		{
			putchar(c);
		}
		n++;
		putchar('\n');
	}
	return (0);
}
