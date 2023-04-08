#include "main.h"
#include <stdio.h>

/**
 * *_strstr - locates a substring.
 *
 * @haystack: the string to be searched
 *
 * @needle: the set of characters to search for.
 *
 * Return: res a pointer to the first occurrence
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
