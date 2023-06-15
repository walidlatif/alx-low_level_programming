#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of s2 to concatenate
 *
 * Return: pointer to concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *sconcat;
	unsigned int lens1, lens2, lsconcat, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (lens1 = 0; s1[lens1] != '\0'; lens1++)
		;

	for (lens2 = 0; s2[lens2] != '\0'; lens2++)
		;

	if (n > lens2)
		n = lens2;

	lsconcat = lens2 + n;

	sconcat = malloc(lsconcat + 1);

	if (sconcat == NULL)
		return (NULL);

	for (i = 0; i < lsconcat; i++)
		if (i < lens1)
			sconcat[i] = s1[i];
		else
			sconcat[i] = s2[i - lens1];

	sconcat[i] = '\0';

	return (sconcat);
}
