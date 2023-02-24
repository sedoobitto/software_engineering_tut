#include "main.h"

/**
 * print_numbers - Prints numbers from 0 to 9 followed by a new line
 *
 * Returns: i.
 */

void print_numbers(void)
{

	int i = 0;

	while (i <= 9)
	{
		_putchar('0' + i);

		i++;
	}
	_putchar('\n');
}
