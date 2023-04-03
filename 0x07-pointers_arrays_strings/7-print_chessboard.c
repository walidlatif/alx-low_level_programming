#include "main.h"
#include <string.h>

/**
 * print_chessboard - prints the chessboard.
 *
 * @a: the string to be printed
 *
 * Return: NULL
 */

void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if (a[i][j] == ' ')
			{
				_putchar('\n');
				i++;
				break;
			}
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
