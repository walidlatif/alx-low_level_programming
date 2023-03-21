#include "main.h"
#include<ctype.h>

/**
 * _isalpha - checks for alphabetic character.
 * @c: the character to be chaked
 * Return: 1 for lowercase otherwise 0
 */

int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

