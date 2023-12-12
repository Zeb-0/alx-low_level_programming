#include "search_algos.h"

/**
 * linear_search - search for a value in an integer array
 * Use - Linear search algorithm
 * @array: input array
 * @size: array size
 * @value: search value
 * return -1 if no value or null array
 * Return: Always EXIT_SUCCESS
*/

int linear_search(int *array, size_t size, int value)
{
	size_t x;

	if (array == NULL)
	{
		return (-1);
	}

	for (x = 0; x < size; x++)
	{
		printf("Value checked array[%li] = [%i]\n", x, array[x]);
		if (array[x] == value)
		{
			return (x);
		}
	}
	return (-1);
}
