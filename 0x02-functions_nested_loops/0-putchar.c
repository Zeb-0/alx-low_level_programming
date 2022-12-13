#include <stdio.h>
/**
 * main - prints _putchar, followed by a new line.
 * Return: 0
 */
int main(void)
{
	char *c = "_putchar";

	while (*c)
	{
		putchar(*c);
		c++;
	}
	putchar('\n');
	return (0);
}
