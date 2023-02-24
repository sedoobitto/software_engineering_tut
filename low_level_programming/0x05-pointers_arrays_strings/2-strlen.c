#include "main.h"

/**
 * _strlen - Computes the length of a string.
 * @s: pointer to string.
 *
 * Return: string length.
 */

int _strlen(char *s)
{
	int len = 0;

	for (; *s != '\0'; s++)
	{
		len += 1;
	}

	return (len);
}
