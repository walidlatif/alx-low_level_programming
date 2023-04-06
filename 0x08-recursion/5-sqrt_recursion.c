#include "main.h"

/**
 * _sqrt_re - square root of a number
 *@n: int passed
 *@x: squared num
 *Return: The square root of n,
 */

int _sqrt_re(int n, int x)
{
	if (x * x > n)
	{
		return (-1);
	}
	if (x * x == n)
	{
		return (x);
	}
	return (_sqrt_re(n, x + 1));
}

/**
 * _sqrt_recursion - natural square root of a number.
 *@n: int passed
 *Return: The square root of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_re(n, 0));
}

