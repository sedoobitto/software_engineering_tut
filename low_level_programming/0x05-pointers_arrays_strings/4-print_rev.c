#include "main.h"

/**
 * print_rev - Prints a string in reverse, followed by a new line.
 * @s - string.
 *
 * Return: reversed string.
 */

void print_rev(char *s)
{
	if (*s != '\0')
	{
		print_rev(s + 1);
		_putchar(*s);
	}
}
