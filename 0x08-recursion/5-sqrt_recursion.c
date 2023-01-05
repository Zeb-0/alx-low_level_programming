#include "main.h"

/**
 * is_square_root - return natural square root of a number
 * @i: input number
 * @j: input number
 * return -1 if n has no natural square root
 * Return: 0
 */

int is_square_root(int j, int i)
{
	if (i * i == j)
		return (i);
	if (i * i > j)
		return (-1);
	return (is_square_root(j, i + 1));
}

/**
 * _sqrt_recursion - returns square root
 * @n: input number
 * Return: natural square root of @n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (is_square_root(n, 1));
}
