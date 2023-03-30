#include "main.h"
#include <ctype.h>
#include <string.h>


/**
 * cap_string - capitalizes all words of a string.
 *
 * @str: string passed
 *
 * Return: str
 */

char *cap_string(char *str)
{
	unsigned int i;
	char *del = " \t\n,;.!?\"(){}";

	for (i = 0; i <= strlen(str); i++)
	{
		if (strchr(del, str[i]))
		{
			str[i + 1] = toupper(str[i + 1]);
		}
	}
	return (str);
}

