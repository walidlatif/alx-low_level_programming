#include "main.h"

/**
* print_line - draws a straight line in the terminal
* @n: number of times the line character should be printed
*
* Return: no return
*/

void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		_putchar('_');
	}
	_putchar('\n');
}

