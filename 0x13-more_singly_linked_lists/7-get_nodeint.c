#include "lists.h"

/**
 * get_nodeint_at_index - gets a node of list at specific index
 * @head: points to listint_t structure
 * @index: index of the node
 * Return: pointer to node at specified index, or NULL if not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	while (head)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
