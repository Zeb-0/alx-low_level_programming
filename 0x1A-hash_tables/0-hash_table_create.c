#include "hash_tables.h"


/**
 * hash_table_create - creates a hash table
 * @size: array size
 * Return: pointer to new hashTable. on error return NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *hash_table;
	/* Allocate memory for the hash table */
	hash_table = malloc(sizeof(hash_table_t));

	if (hash_table == NULL)
		return (NULL);
	hash_table->size = size;
	hash_table->array = malloc(sizeof(hash_node_t *) * size);

	if (hash_table->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		hash_table->array[i] = NULL;
	return (hash_table);
}
