#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from n to 98
 * followed by a new line.
 * @n : number passed to the function.
 *
 * Return: nothing
 */
void print_to_98(int n)
{
while (n <= 98)
{
	if (n < 98)
	{
		printf("%d, ", n);
	}
	else
	{
		printf("%d.", n);
	}
n++;
}
printf("\n");
}
