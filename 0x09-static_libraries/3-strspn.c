#include "main.h"


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
	int i;
	int j;
	int k;


	k = 0;
	j = 0;
	i = 0;
	while (s[i])
	{
		j = 0;
		k = 0;
		while (accept[j])
		{
			if (accept[j] == s[i])
			{
				k = 1;
			}
			j++;
		}
		if (k == 0)
			return (i);
		i++;
	}
	return (i);
}
