#include "main.h"
#include <stdio.h>

/**
* _atoi - changes ascii to int
* @s: the string to be changed
*
* Return: the converted int
*/

int _atoi(char *s)
{
	int i, d, n, len, f, digit;

	i = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && f == 0)
	{
		if (s[i] == '-')
			++d;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);

	return (n);
}

/**
*main - multiplies two numbers.
*
*@argc: number of arguments passed to the program
*
*@argv: array of pointers to the arguments
*
*Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
	int a, b, mul;

	if (argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		a = _atoi(argv[1]);
		b = _atoi(argv[2]);
		mul = a * b;

		printf("%d\n", mul);
	}
	return (0);
}
