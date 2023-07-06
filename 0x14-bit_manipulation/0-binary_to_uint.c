#include "main.h"

/**
 *binary_to_uint - converts a binary number to an unsigned int.
 *@b: char to be tested
 *
 *Return: converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int decimal_number = 0;

	if (!b)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		decimal_number = (decimal_number << 1) + (b[i] - '0');
	}

	return (decimal_number);
}

