#include<stdio.h>
/**
 * main - Entry point
 * program that prints the alphabet in lowercase, and then in uppercase
 * Return: Always 0 (Success)
 */
int main(void)
{

	char la = 97;
	char ua = 65;

	while (la <= 122)
	{
		putchar(la);
		la++;
	}
	while (ua <= 90)
	{
		putchar(ua);
		ua++;
	}
	putchar('\n');
	return (0);
}

