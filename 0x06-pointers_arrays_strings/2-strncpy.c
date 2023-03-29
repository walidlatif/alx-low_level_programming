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
	strncpy(dest, src, n);
	return (dest);
}
