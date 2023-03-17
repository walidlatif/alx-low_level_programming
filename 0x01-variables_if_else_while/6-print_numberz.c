#include<stdio.h>

/**
 * main - Entry point
 * prints all single digit numbers of base 10 starting from 0 char not allowed
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 48;

	while (n <= 57)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
