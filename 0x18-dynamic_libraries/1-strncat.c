#include <string.h>
#include "main.h"

/**
 * _strncat - concatenates two strings.
 *
 * @dest: string passed
 *
 * @src: string passed
 *
 * @n: int passed
 *
 * Return: dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int j, i = 0;

	while (dest[i] != '\0')
		i++;
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

