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
	strncat(dest, src, n);
	return (dest);
}
