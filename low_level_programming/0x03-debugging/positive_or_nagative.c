#include "main.h"
#include <stdio.h>

/**
 * positive_or_negative - Tests an integer then prints if it
 * is positive or negative.
 * * @i: integer to be tested
 *
 * Return: result of the computation
 */

void positive_or_negative(int i)
{
	if (i < 0)
	{
		printf("%d is negative", i);
	}
	else if (i > 0)
	{
		printf("%d is positive", i);
	}
	else
	{
		printf("%d is zero", i);
	}
	printf("\n");
}
