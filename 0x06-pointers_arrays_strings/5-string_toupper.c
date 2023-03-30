#include "main.h"
#include <string.h>
#include <ctype.h>
/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 *
 * @str: string passed
 *
 * Return: str
 */

char *string_toupper(char *str)
{
	unsigned int i;

	for (i = 0; i <= strlen(str); i++)
	{
		str[i] = toupper(str[i]);
	}
	return (str);
}
