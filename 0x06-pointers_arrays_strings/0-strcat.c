#include "main.h"
#include <string.h>

/**
 * _strcat - concatenates two strings.
 *
 * @dest: char passed
 *
 * @src: char passed
 *
 * Return: dest.
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
