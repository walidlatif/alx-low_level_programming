#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0;
	int j = 1;
	int k = 2;

	while (i <= 7)
	{
		while (j <= 8)
		{
			while (k <= 9)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');
				k++;
				if (i != 7)
				{
					putchar(',');
					putchar(' ');
				}

			}
			j++;
			k = j + 1;
		}
		j = i + 1;
		i++;
	}
	putchar('\n');
	return (0);
}
