#include "main.h"

/**
 * print_chessboard - prints chessboard
 * @a: array row
 * Return: nothing
 */
void print_chessboard(char (*a)[8])
{
	int i = 0, j;

	for (; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if ((i + j) % 2 == 0)
				_putchar('#');
			else
				_putchar(' ');
		}
		_putchar('\n')
	}
}
