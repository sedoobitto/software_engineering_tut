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
	int len1, i;

	len1 = strlen(dest);
	/*len2 = strlen(src);*/

	for (i = 0; i < n; i++)
	{
		dest[len1 + i] = src[i];
		if (src[i] == '\0')
			break;
	}

	return (dest);
}
