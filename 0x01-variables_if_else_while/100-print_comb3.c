#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits.
 * Return: 0
 */
int main(void)
{
	int num1, num2;

	num1 = 48;
	num2 = 48;

	while (num2 < 58)
	{
		num1 = 48;
		while (num1 < 58)
		{
			if (num2 != num1 && num2 < num1)
			{
				putchar(num2);
				putchar(num1);
				if (num1 == 57 && num2 == 56)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			num1++;
		}
		num2++;
	}
	putchar('\n');
	return (0);
}
