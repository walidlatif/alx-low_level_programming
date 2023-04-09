#include <stdio.h>

/**
 * main - prints the number of arguments passed into it.
 *@argc: number of arguments passed
 *@argv: array of pointers to the arguments
 *
 *Return: Always 0
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	if (argv[0])
		printf("%d\n", argc - 1);

	return (0);
}
