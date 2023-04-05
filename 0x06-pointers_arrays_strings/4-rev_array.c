#include "main.h"

/**
 * reverse_array - reverse an array.
 * @a: input array
 * @n: number of elements of array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int tmp;

	while (i < n--)
	{
		tmp = a[i];
		a[i++] = a[n];
		a[n] = tmp;
	}
}
