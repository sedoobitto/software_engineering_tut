#include <stdio.h>

/**
 * main - Finds and prints the largest prime factor of n
 *
 * Return: 0
 */

int main(void)
{
	long int a, b;
	a =  612852475143;

	for (b = 2; b < a; b++)
	{
		while (a % b == 0)
		{
			a /= b;
		}
	}
	printf("%ld", b);
	printf("\n");
	return (0);
}
