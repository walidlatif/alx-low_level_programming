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

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;

	while (haystack[i])
	{
		while (needle[j])
		{
			if (haystack[i + j] != needle[j])
				break;
			j++;
		}
		if (!needle[j])
			return (&haystack[i]);
		i++;
	}
	return (NULL);
}

