#include "main.h"

/**
 * print_square- Prints a square folowed by a new line
 * @size: Size of the square
 *
 * Return: Void
 */

void print_square(int size)
{
	int x;
	
	if (size > 0)
	{
		int y = 1;

		while (y <= size)
		{
			for (x = 0; x <= size; x++)
			{
				_putchar('#');
			}
		_putchar('\n');
		y++;
		}
	}
	else
	{
		_putchar('\n');
	}
_putchar('\n');
}
