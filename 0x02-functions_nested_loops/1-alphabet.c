#include <stdio.h>
/**
 * main - alphabet
 * Return: 0
 */
int main(void)
{
	char c;

	while (c = 'a'; c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
