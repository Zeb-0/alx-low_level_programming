#include "main.h"
#include <stdlib.h>

/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to memory prev allocated to malloc:mallocmalloc(old_size)
 * @old_size: allocated space size by ptr
 * @new_size: new memory block size in bytes
 * Return: void pointer to new memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_block, *new_ptr;
	unsigned int i = 0;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL) /* treat as normal malloc */
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	new_block = malloc(new_size);
	new_ptr = ptr;
	if (old_size > new_size)
		old_size = new_size;
	for (i = 0; i < old_size; i++)
		new_block[i] = new_ptr[i];
	free(ptr);
	return (new_block);
}
