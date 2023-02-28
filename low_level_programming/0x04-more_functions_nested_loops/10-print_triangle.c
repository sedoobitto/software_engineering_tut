#include "main.h"

/**
 * print_triangle - Prints a triangle followed by a new line
 * @size: size of the triangle
 *
 *Return: void
 */

void print_triangle(int size)
{
	int i, j;

	int x = size -1;
	while (x >= 0)
	{
		for (i = 1; i <= x; i++)
		{
			_putchar(' ');
		}

		for  (j = 1; j <= (size - x); j++)
		{
			_putchar('#');
		}
	_putchar('\n');
	x--;
	}
}
