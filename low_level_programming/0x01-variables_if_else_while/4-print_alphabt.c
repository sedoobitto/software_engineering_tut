#include <stdio.h>
/**
 * main - Entry point
 * prints the alphabet in lowercase but skips q and e
 *
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		if (n != 'e' && n != 'q')
		{
			putchar(n);
		}
	}

	putchar('\n');

	return (0);
}
