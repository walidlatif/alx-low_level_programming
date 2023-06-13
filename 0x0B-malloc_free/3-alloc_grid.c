#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - pointer to a 2 dimensional array of integers.
 * @width: array width
 * @height: array height
 *
 * Return: pointer of an array of chars
 */
int **alloc_grid(int width, int height)
{
		int i, j;
	int **ar;

	if (height <= 0 || width <= 0)
		return (NULL);

	ar = (int **) malloc(sizeof(int *) * height);
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		ar[i] = (int *) malloc(sizeof(int) * width);
		if (ar[i] == NULL)
		{
			free(ar);
			for (j = 0; j <= i; j++)
				free(ar[j]);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			ar[i][j] = 0;
		}
	}
	return (ar);
}
