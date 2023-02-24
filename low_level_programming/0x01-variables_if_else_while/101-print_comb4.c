#include <stdio.h>
/**
 * main - Entry point
 * Prints all possible different combinations of three digits
 * The three digits must be different
 * seperated with a comma followed by a space
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int x;
	int y;
	int z;

	for (x = 48; x < 58; x++)
	{
		for (y = x + 1; y < 58; y++)
		{
			for (z = y + 1; z < 58; z++)
			{
				putchar(x);
				putchar(y);
				putchar(z);

				if (x == 55 && y == 56 && z == 57)
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
	}
	return (0);
}
