#include "main.h"
#include <stdio.h>

/**
 * main - Prints the sum of the even-valued terms
 * of the fibonacci sequence, whose values do not
 * exceed 4,000,000.
 *
 * Return: 0 Always.
 */
int main(void)
{
int a, b, c, d, i;
a = 1;
b = 2;
for (i = 0; i < 3999997; i++)
{
	c = a + b;
	a = b;
	b = c;
	if (c % 2 == 0)
	{
		d += c;
	}
}
printf("%d\n", (d + 2));
return (0);
}
