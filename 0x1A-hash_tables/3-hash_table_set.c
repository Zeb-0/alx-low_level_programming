#include "hash_tables.h"

/**
 * hash_table_set - Adds or updates an element in a hash table.
 * @ht: pointer to the hash table.
 * @key: a non-empty string key to add.
 * @value: The value associated with the key.
 *
 * Return: 1 on success, 0 on failure.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	char *value_copy;
	unsigned long int index, i;

	/* Check if ht, key or value is NULL, or if key is an empty string */
	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	/* Duplicate value to store in hash table */
	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);

	/* Get the index of the array where the key-value pair should be stored */
	index = key_index((const unsigned char *)key, ht->size);

	/* Check if the key already exists in the hash table */
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			/* If key already exists, update its value and return 1 */
			free(ht->array[i]->value);
			ht->array[i]->value = value_copy;
			return (1);
		}
	}

	/* If key does not exist in hash table, create a new node */
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(value_copy);
		return (0);
	}

	/* Initialize the new node */
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->value = value_copy;

	/* Add the new node at the beginning of the linked list at the index */
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}

