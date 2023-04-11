#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * @str: string
 *
 * Return: returns a pointer to the duplicated string
 */

char *_strdup(char *str)
{
	char *cp;
	int i;
	int l = 0;

	if (str == NULL)
		return (NULL);

	while (str[l] != '\0')
		l++;

	cp = (char *)malloc((sizeof(char) * l) + 1);
	if (cp == NULL)
		return (NULL);

	for (i = 0; i < l; i++)
		cp[i] = str[i];
	cp[l] = '\0';

	return (cp);
}
