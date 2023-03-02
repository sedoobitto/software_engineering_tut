#include "main.h"
/**
 * _strcpy - Copies the string pointed to by src, including the
 * terminating null byte (\o), to the buffer pointed to by dest.
 * @src: pointer to the string that is to be copied.
 * @dest: pointer to buffer the string is to be coppied to.
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (i >= 0)
	{
		*(dest + i) = *(src + i);
		if (*(src + i) == '\0')
			break;
		i++;
	}

	return (dest);
}
