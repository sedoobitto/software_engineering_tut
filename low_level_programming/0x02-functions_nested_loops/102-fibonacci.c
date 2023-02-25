#include "main.h"
#include <stdio.h>

/**
 * main - Prints the first fibonaci numbers starting
 * with 1 and 2, followed by a new line.
 *
 *
 * Return: Always 0
 */
int main(void)
{
int a, b, c, i;
a = 1;
b = 2;
printf("%d, %d, ", a, b);
for (i = 0; i < 48; i++)
{
	c = a + b;
	printf("%d, ", c);
	a = b;
	b = c;
}
printf("\n");
return (0);
}
