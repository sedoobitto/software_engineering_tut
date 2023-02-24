#include <stdio.h>
/**
 * main - Entry point
 * Prints base 16 numbers in lowercase
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}

	for (n = 97; n <= 102; n++)
	{
		putchar(n);
	}

	putchar('\n');

	return (0);
}
