#include "main.h"
#include <string.h>

/**
 * *_strpbrk - locates a character in a string.
 *
 * @s: the string to be searched
 *
 * @accept: the set of characters to search for.
 *
 * Return: nb a pointer to the first occurrence of any character
 */

char *_strpbrk(char *s, char *accept)
{
	char *res;

	res = strpbrk(s, accept);
	return (res);
}
