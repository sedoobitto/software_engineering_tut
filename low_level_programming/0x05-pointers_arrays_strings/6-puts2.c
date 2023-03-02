#include "main.h"

/**
 * puts2 - Prints every other character of a string,
 * starting with the first character.
 * @str: string
 *
 * Return: nill
 */

void puts2(char *str)
{
	int j, len;
	char c;

	len = strlen(str);
	for (j = 0; j <= (len - 1); j += 2)
	{
		c = (*(str + (j)));
		_putchar(c);
	}
	_putchar('\n');
}
