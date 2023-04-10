#include "hash_tables.h"

/**
 * key_index - gives you the index of a key.
 * @key: is the key
 * @size: hash table array size
 * Return: index where key/value should b stored in hash table array.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
