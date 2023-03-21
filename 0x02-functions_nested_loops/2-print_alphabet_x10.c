#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times
 * 
 * Return: Always 0 (Success) 
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

