#include "main.h"

/**
 * *_memcpy - copies memory area.
 *
 * @dest: A pointer to the destination memory
 * location where the memory is to be copied.
 *
 * @src: A pointer to the source memory location
 * from where the memory is to be copied.
 *
 * @n: The number of bytes to be copied.
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
