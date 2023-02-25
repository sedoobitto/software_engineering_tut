#include "main.h"

/**
 * times_table - Prints the 9 times table
 * starting with 0.
 *
 * Return: Multiplication table
 */
void times_table(void)
{
int j, i, r;

for (j = 0; j <= 9; j++)
{
	for (i = 0; i <= 9; i++)
	{
		r = j * i;
		if (r <= 9)
		{
			_putchar(' ');
			_putchar(r + 48);
		}
		else
		{
			_putchar((r / 10) + 48);
			_putchar((r % 10) + 48);
		}
		_putchar(',');
		_putchar(' ');
	}
_putchar('\n');
}
_putchar('\n');
}
