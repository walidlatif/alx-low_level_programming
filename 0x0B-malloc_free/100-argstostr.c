#include "main.h"
#include <stdlib.h>

/**
* argstostr - concatenates all the arguments of your program
* @ac: argument count.
* @av: argument vector.
*
* Return: pointer of an array of char
*/

char *argstostr(int ac, char **av)
{
	int i, j, x, s;
	char *ar;

	s = 0;
	x = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			s++;
			j++;
		}
		s++;
		i++;
	}
	ar = malloc((sizeof(char) * s) + 1);
	if (ar == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			ar[x] = av[i][j];
			j++;
			x++;
		}
		ar[x] = '\n';
		x++;
		i++;
	}
	ar[x] = '\0';
	return (ar);
}
