#include "hash_table.h"

/**
 * hash_djb2 - Hash function implementing the djb2 algorithm.
 * @str: The string to hash.
 *
 * Return: The calculated hash.
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash = 5381;

	for (int i = 0; str[i] != '\0'; i++)
		hash = ((hash << 5) + hash) + str[i]; /* hash * 33 + c */
	return (hash);
}
