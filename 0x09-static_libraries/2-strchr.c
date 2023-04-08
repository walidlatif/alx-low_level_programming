#include "main.h"

/**
 * *_strchr - locates a character in a string.
 *
 * @s: A pointer to the string to be searched.
 *
 * @c: The character to be located.
 *
 * Return: res
 */

char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}

