#include <ctype.h>

/**
 * _isupper - checks for uppercase character.
 *
 * @c: char to check
 *
 * Return: 1 if c is uppercase , 0 otherwise.
 */

int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	} else
		return (0);
}

