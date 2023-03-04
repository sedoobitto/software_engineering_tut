#include "main.h"

/**
 * _strncpy - Copies a string
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to be copied
 *
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];

		if (src[i] == '\0')
			break;
	}

	return (dest);
}
