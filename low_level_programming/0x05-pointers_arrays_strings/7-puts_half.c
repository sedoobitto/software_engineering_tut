#include "main.h"

/**
 * puts_half - Prints the second half of a string
 * followed by a new line.
 * @str: string.
 *
 * Return: nill
 */

void puts_half(char *str)
{
	int len, n, j;
	char c;

	len = strlen(str);

	if (len % 2 != 0)
	{
		n = (len - 1) / 2;
	}
	else
	{
		n = len / 2;
	}

	for (j = n; j <= (len - 1); j++)
	{
		c = (*(str + (j)));
		_putchar(c);
	}
	_putchar('\n');
}
