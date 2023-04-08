
#include <string.h>
#include "main.h"

/**
 * _strncpy - concatenates two strings.
 *
 * @dest: string passed
 *
 * @src: string passed
 *
 * @n: int passed
 *
 * Return: dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
