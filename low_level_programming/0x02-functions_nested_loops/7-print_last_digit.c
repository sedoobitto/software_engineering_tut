#include "main.h"

/**
 * print_last_digit - Prints the last didgit of a number.
 * @i : Number to be computed
 *
 * Return: the last digit of a number
 */
int print_last_digit(int i)
{
int r;
r = i % 10;
if (i >= 0)
{
return (r);
}
else
{
return (-r);
}
_putchar('\n');
}
