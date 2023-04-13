#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers in the range [min, max].
 * @min: The minimum value of the range.
 * @max: The maximum value of the range.
 * Return: A pointer to the allocated array if successful, NULL otherwise.
 */

int *array_range(int min, int max)
{
	int n, i;
	int *ptr;

	if (min > max)
		return (NULL);

	n = (max - min) + 1;
	ptr = malloc(n * sizeof(int));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < n; i++)
	{
		ptr[i] = min + i;
	}

	return (ptr);
}

