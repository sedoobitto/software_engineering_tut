#include <stdio.h>
/**
 * main - Entry point
 * Prints all possible different combinations of two digits
 * Numbers are seperated by a comma followed by a space
 * The two digits must be different
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int x;
	int y;

	for (x = 48; x < 58; x++)
	{
		for (y = x + 1; y < 58; y++)
		{
			putchar(x);
			putchar(y);

			if (x == 56 && y == 57)
			{
				putchar('\n');
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}

	}

	return (0);

}
