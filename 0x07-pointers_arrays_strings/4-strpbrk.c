#include "main.h"

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
	int i;
	int j;
	int found;

	i = 0;
	while (s[i])
	{
		j = 0;
		found = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
				found = 1;
			j++;
		}
		if (found == 1)
			return (s + i);
		i++;
	}
	return (NULL);
}

