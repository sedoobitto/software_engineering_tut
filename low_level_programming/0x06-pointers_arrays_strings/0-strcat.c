#include "main.h"

/**
 * _strcat - Appends the scr string to the dest string,
 * overwritting the terminating null byte at the end of dest,
 * and adds a terminating null byte.
 * @dest: string 1
 * @src: string 2
 *
 * Return: dest.
 */

char *_strcat(char *dest, char *src)
{
	int i, len1, len2;

	len1 = strlen(dest);
	len2 = strlen(src);

	for (i = 0; i <= len2; i++)
	{
		dest[len1 + i] = src[i];
	}

	return (dest);
}
