#include "main.h"

/**
 * add - Adds two integers and returns the result.
 * @n : first interger to compute.
 * @m : second integer to compute
 *
 * Return: Result
 */
int add(int n, int m)
{
int result;
result = n + m;
	if (result <= 9)
	{
		_putchar(result + 48);
	}
	else
	{
		_putchar((result / 10) + 48);
		_putchar((result % 10) + 48);
	}
_putchar('\n');
return (result);
}
