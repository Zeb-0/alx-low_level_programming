#include "main.h"
#include <math.h>

/**
 * prime_number - checks for prime number
 * @n: input number
 * @i: iterator
 * Return: 1 if prime else 0
 */

int prime_number(int n, int i)
{
	if (n < 2)
	{
		return (0);
	}
	if (i > sqrt(n))
		return (1);
	if ((n % i) == 0)
		return (0);
	return (prime_number(n, i + 1));
}

/**
 * is_prime_number - returns prime number
 * @n: evaluate number
 * Return: 1 if prime otherwise 0
 */

int is_prime_number(int n)
{
	return (prime_number(n, 2));
}
