#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
* main - adds positive numbers.
*
*@argc: number of arguments passed to the program
*
*@argv: array of pointers to the arguments
*
*Return: Always 0 (Success)
*/

int main(int argc, char **argv)
{
	int a, c = 0;

	if (argc == 2)
	{
		a = atoi(argv[1]);
		if (a < 0)
		{
			printf("%d\n", 0);
			return (0);
		}
		if (a % 25 >= 0)
		{
			c += a / 25;
			a = a % 25;
		}
		if (a % 10 >= 0)
		{
			c += a / 10;
			a = a % 10;
		}
		if (a % 5 >= 0)
		{
			c += a / 5;
			a = a % 5;
		}
		if (a % 2 >= 0)
		{
			c += a / 2;
			a = a % 2;
		}
		if (a % 1 >= 0)
			c += a;
		printf("%d\n", c);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
