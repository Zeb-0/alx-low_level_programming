#include "main.h"

/**
 * _memcpy - copies memory area
 * @n: number of bytes
 * @src: memory area
 * @dest: pointer
 * Return: @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int n;

	for (i = 0; i < n; i++)
		dest[i] = src;
	return (dest);
}
