#include<stdio.h>
#include "main.h"

void print_alphabet(void)
{
	char c;

	for (c = 97; c <= 122; c++)
	{
		putchar(c);
	}
	putchar('\n');
}

