#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars.
 * @size: array size.
 * @c: initial value
 *
 * Return: Returns a pointer to the array, or NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	str = malloc(sizeof(c) * size);
	if (size == 0)
		return (NULL);

	if (str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;

	return (str);
}

