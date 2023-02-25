#include "main.h"

/**
 * print_times_table - Prints n times table
 * @n: Number to convert into times table
 *
 * Return: Multiplication table
 */
void print_times_table(int n)
{
int j, i, mul;
if (n < 0 || n > 15)
{
	_putchar(' ');
}
else
{
	for (j = 0; j <= n; j++)
	{
		for (i = 0; i <= n; i++)
		{
			mul = j * i;
			if (i !=0 && i <= n)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (mul <= 9)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(mul + 48);
			}
			else if (mul > 9 && mul < 100)
			{
				_putchar(' ');
				_putchar((mul / 10) + 48);
				_putchar((mul % 10) + 48);
			}
			else
			{
				_putchar((mul / 100) + 48);
				_putchar(((mul % 100) / 10) + 48);
				_putchar((mul % 10) + 48);
			}
		}
	_putchar('\n');
	}
}
}
