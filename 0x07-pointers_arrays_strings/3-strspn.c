#include "main.h"
#include <string.h>

/**
 * *_strspn - locates a character in a string.
 *
 * @s: A pointer to the string to search.
 *
 * @accept: A pointer to a null-terminated string
 * containing the set of characters to search for.
 *
 * Return: nb
 */

unsigned int _strspn(char *s, char *accept)
{
	int nb;

	nb = strspn(s, accept);
	return (nb);
}
