#include <stdio.h>
/**
 * main - Entry point
 * prints the alphabet in lowercase
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
	putchar('\n');

	return (0);
}
