#include "main.h"

/**
 * str_length - return string length
 *@c: String passed
 *Return: c length
 */

int str_length(char *c)
{
	if (*c == '\0')
		return (0);
	else
		return (str_length(c + 1) + 1);
}

/**
 * ch_pal_str - check string c if palindrome
 *@c: string passed
 *@a: index to start
 *@z: index to finish
 *Return: returns 1 if a string is a palindrome and 0 if not.
 */

int ch_pal_str(char *c, int a, int z)
{
	if (c[a] != c[z])
		return (0);
	if (a >= z)
		return (1);
	return (ch_pal_str(c, a + 1, z - 1));
}
/**
 * is_palindrome - string if is a palindrome.
 *@s: string passed
 *Return: 1 if a string is a palindrome and 0 if not.
 */

int is_palindrome(char *s)
{
	if (str_length(s) <= 1)
		return (1);
	else
		return (ch_pal_str(s, 0, str_length(s) - 1));
}
