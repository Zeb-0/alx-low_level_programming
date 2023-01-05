#include "main.h"

/**
 * _sqrt_recursion - return natural square root of a number
 * @n: input number
 * @i: input number
 * return -1 if n has no natural square root
 * Return: 0
 */

int _sqrt_recursion(int n)
{
	int i;


	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1)
	return (_sqrt_recursion(n, i + 1));
}
