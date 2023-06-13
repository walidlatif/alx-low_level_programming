#include <stdlib.h>
#include "main.h"

/**
 * count - Counts the number of words in a string
 * @s: string to evaluate
 * Return: number of words
 */

int count(char *s)
{
	int fl, a, b;

	fl = 0;
	b = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == ' ')
			fl = 0;
		else if (fl == 0)
		{
			fl = 1;
			b++;
		}
	}
	return (b);
}

/**
 * **strtow - splits a string into words
 * @str: string to split
 *
 * Return: returns a pointer to an array of strings (words)
 */

char **strtow(char *str)
{
	char **mrx, *t;
	int i, k = 0, len = 0, words, a = 0, first, last;

	while (*(str + len))
		len++;
	words = count(str);
	if (words == 0)
		return (NULL);

	mrx = (char **) malloc(sizeof(char *) * (words + 1));
	if (mrx == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (a)
			{
				last = i;
				t = (char *) malloc(sizeof(char) * (a + 1));
				if (t == NULL)
					return (NULL);
				while (first < last)
					*t++ = str[first++];
				*t = '\0';
				mrx[k] = t - a;
				k++;
				a = 0;
			}
		}
		else if (a++ == 0)
			first = i;
	}
	mrx[k] = NULL;

	return (mrx);
}

