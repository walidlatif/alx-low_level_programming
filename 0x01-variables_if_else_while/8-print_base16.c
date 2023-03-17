#include<stdio.h>
/**
 * main - Entry point
 * prints all the numbers of base 16 in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{

	char num = 48;
	char al = 97;

	while (num <= 57)
	{
		putchar(num);
		num++;
	}
	while (al <= 102)
	{
		putchar(al);
		al++;
	}
	putchar('\n');
	return (0);
}

