#include<stdio.h>
/**
 * main - Entry point
 * program that prints the alphabet in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i = 97;

	while (i <= 122)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}

