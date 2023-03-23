#include <ctype.h>

/**
 * _isdigit - checks for a digit.
 *
 * @c: char to check
 *
 * Return: 1 if c is a digit , 0 otherwise.
 */

int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	} else
		return (0);
}

