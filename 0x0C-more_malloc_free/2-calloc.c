#include "main.h"
#include <stdlib>

/**
 * *_calloc - allocates memory for an array, using malloc
 * @nmemb: an array
 * @size: of bytes of array
 * Return: pointer to allocated memory, NULL if 0 or on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	char *space;

	if (nmemb == 0 || size == 0)
		return (NULL);

	space = malloc(nmemb * size);
	if (space == NULL)
		return (NULL);

	for (; i < nmemb * size; i++)
		*(space + i) = 0;

	return (space);
}
