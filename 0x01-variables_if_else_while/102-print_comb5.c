#include <stdio.h>
/**
 * main - prints all possible combinations of two two-digit numbers.
 * Return: 0
 */
int main(void)
{
	int num1, num2, num3, num4, op1, op2;

	num1 = num2 = num3 = num4 = 48;
	while (num4 < 58)
	{
		num3 = 48;
		while (num3 < 58)
		{
			num2 = 48;
			while (num2 < 58)
			{
				num1 = 48;
				while (num1 < 58)
				{
					op1 = (num4 * 10) + num3;
					op2 = (num2 * 10) + num1;
					if (op1 < op2)
					{
						putchar(num4);
						putchar(num3);
						putchar(' ');
						putchar(num2);
						putchar(num1);
						if (num4 == 57 && num3 == 56 && num2 == 57 && num1 == 57)
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
			num3++;
		}
		num4++;
	}
	putchar('\n');
	return (0);
}
