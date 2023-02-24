#include "main.h"
#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers
 * starting with 1 and 2, followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
int a, b, c, i;
a = 1;
b = 2;
printf("%d, %d, ", a, b);
for (i = 0; i < 95; i++)
{
	c = a + b;
	a = b;
	b = c;
	printf("%d, ", c);
}
printf("\n");
return (0);
}
