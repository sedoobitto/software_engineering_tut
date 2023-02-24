#include "main.h"

/**
 * more_numbers(void) - Prints 10 times the numbers from 0 to 14
 *
 * Return: void
 */

void more_numbers(void)
{
	int j;
	int i = 0;

	while (i <= 10)
	{
		for (j = 0; j < 15; j++)
		{
			if (j >= 10)
			{
				_putchar((j / 10) + 48);
			}
			_putchar ((j % 10) + 48);
		}
		_putchar('\n');

	i++;
	}
_putchar('\n');

}
