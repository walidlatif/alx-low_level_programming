#include "main.h"
#include <string.h>

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
	char *res;

	res = strchr(s, c);
	return (res);
}
