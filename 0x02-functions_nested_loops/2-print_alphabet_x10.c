#include "main.h"

/**
 * print_alphabet - prints 10 times the alphabet, in lowercase,
 */

void print_alphabet(void)
{
	char c;
	int i;

	for (i = 0; i <= 9; i++)
	{
		for (c = 97; c <= 122; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
	_putchar('\n');
}

