#include<stdio.h>
/**
 * main - Entry point
 * Print all the letters except q and e
 * Return: Always 0 (Success)
 */
int main(void)
{
	char al = 97;

	while (al <= 122)
	{
		if (al == 101 || al == 113)
		{
			al++;
		}
		putchar(al);
		al++;
	}
	putchar('\n');
	return (0);
}

