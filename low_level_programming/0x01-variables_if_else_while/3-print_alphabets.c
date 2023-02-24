#include <stdio.h>
/**
 * main - Entry Point
 * Prints the alphabet in lowercase and then in uppercase
 *
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		putchar(n);
	}

	for (n = 'A'; n <= 'Z'; n++)
	{
		putchar(n);
	}

	putchar('\n');

	return (0);
}
