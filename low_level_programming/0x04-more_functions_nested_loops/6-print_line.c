#include "main.h"

/**
 * print_line - Draws a straight line in the terminal
 * @n: length of the line
 *
 * Return: Void
 */

void print_line(int n)
{
	if (n > 0)

	{
		int i = 1;

		while (i <= n)
		{
			_putchar('_');
		i++;
		}
	}
	else
	{
		_putchar('\n');
	}
_putchar('\n');
}

