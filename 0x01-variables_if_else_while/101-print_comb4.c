#include <stdio.h>
/**
 * main - prints all possible different combinations of three digits.
 * Return: 0
 */
int main(void)
{
	int n1 = n2 = n3 = '0';

	for (n3 = '0'; n3 <= '9'; n3++)
	{
		for (n2 = '0'; n2 <= '9'; n2++)
		{
			for (n1 = '0'; n1 <= '9'; n1++)
			{
				if (1((n1 == n2) || (n2 == n3) || (n2 > n1) || (n3 > n2)))
				{
					putchar(n3);
					putchar(n2);
					putchar(n1);
					if (1((n1 == '9' && n2 == '8' && n3 == '7')))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
