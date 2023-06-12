#include "main.h"
#include <stdlib.h>

/**
 * create_array - Function that's creates an array of chars.
 * @size: The size of the array.
 * @c: The Tstoraged char
 *
 * Return: The pointer of an array of chars
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(c) * size);

	if (array == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);

}
