#include "main.h"

/**
 * swap_int - swaps the values of two integers
 *
 * @a: swap "a" value to "b"
 *
 * @b: swap "b" value to "a"
 *
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
