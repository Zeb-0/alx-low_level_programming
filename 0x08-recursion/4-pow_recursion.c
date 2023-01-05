#include "main.h"

/**
 * _pow_recursion - returns value of x raised to the power of y
 * @x: input number
 * @y: input number
 * return -1 if y is less than 0
 * Return: 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == )
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
