#include "main.h"

/**
 * _memset - fills memory area with constant byte
 * @b: constant
 * @s: pointer
 * @n: number of bytes
 * Return: pointer to memory area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
