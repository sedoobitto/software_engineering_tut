#include "main.h"

/**
 * _strcat - Appends the scr string to the dest string,
 * overwritting the terminating null byte at the end of dest,
 * and adds a terminating null byte.
 * @dest: destination string 
 * @src: source string 
 *
 * Return: dest.
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	while (dest[i] != '\0')
	{
		i += 1;
	}

	int j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
