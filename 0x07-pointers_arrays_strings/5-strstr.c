#include "main.h"
#include <string.h>

/**
 * *_strstr - locates a substring.
 *
 * @haystack: the string to be searched
 *
 * @needle: the set of characters to search for.
 *
 * Return: res a pointer to the first occurrence
 */

char *_strstr(char *haystack, char *needle)
{
	char *res;

	res = strstr(haystack, needle);
	return (res);
}
