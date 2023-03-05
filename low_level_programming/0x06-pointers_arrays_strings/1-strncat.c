#include "main.h"

/**
 * _strncat - Concatenates two strings, using at most n bytes from src
 * @dest: destination
 * @src: source
 * @n: number of bytes used from src
 *
 * Return: pointer to dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int j;
	int i = 0;

	while (dest[i] != '\0')
	{
		i += 1;
	}

	for (j = 0; j < n; j++)
	{
		dest[i] = src[j];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
