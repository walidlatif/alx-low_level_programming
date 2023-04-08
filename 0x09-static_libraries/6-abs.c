#include "main.h"

/**
* _abs - computes the absolute value of an integer.
* @n: is the number to be checked
* Return: abs(n)
*/

int _abs(int n)
{
	if (n < 0)
		n *= -1;
	return (n);
}

