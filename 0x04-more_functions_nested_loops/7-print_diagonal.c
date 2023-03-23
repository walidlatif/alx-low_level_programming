#include "main.h"

/**
* print_diagonal - draws a diagonal line on the terminal
* @n: number of times \ should be printed
*
* Return: no return
*/

void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i - 1; j++)
		{
			_putchar(32);
		}
		_putchar(92);
		_putchar('\n');
	}
}

