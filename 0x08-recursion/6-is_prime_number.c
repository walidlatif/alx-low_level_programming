#include "main.h"

/**
 * check_numb - return 1  if int n prime else return 0
 *@y: int passed to check it
 *@x: divided for y
 *Return: 1 if prime 0 if otherwise
 */

int check_numb(int x, int y)
{
	if (x == y)
		return (1);
	else if (x % y == 0)
		return (0);
	return (check_numb(x, y + 1));
}

/**
 * is_prime_number - return 1  if int n prime else return 0
 *@n: int passed
 *Return: 1 if prime 0 if otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (check_numb(n, 2));
}

