#include "main.h"
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

int main(int argc, char *argv[])
{

	int i, j, sum;

	if (argc ==  1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!(isdigit(argv[i][j])))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
