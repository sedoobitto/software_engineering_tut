#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal
 *@n: Lenght of the diagonal line
 *
 *Return: void
 */

void print_diagonal(int n)
{
	int i;
	
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int j = 1;

		while (j <= n)
		{
			for (i = 1; i <= j; i++)
			{
				_putchar(32);
			}
		_putchar(92);
		_putchar('\n');
		j++;
		}
	}
}

