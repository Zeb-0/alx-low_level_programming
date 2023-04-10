#include "hash_tables.h"

/**
 * hash_table_get - get the value associated with the key
 * @ht: pointer to the hash table.
 * @key: The key to get the value of.
 *
 * Return: if key is unmatched NULL.
 * else value associated with key in ht.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int index;

	/* Check if ht or key is NULL, or if key is an empty string */
	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	/* Get the index of array to store key-value pair */
	index = key_index((const unsigned char *)key, ht->size);

	/* Check if index is within the range of the array */
	if (index >= ht->size)
		return (NULL);

	/* find the matching key in the linked list */
	node = ht->array[index];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
