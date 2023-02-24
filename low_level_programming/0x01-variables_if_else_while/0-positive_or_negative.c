#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *  main - Prints whether user's input is positive or negatve
 *
 *  Return: 0 if program exits Successful,non-zero otherwise
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("Enter a random number: ");
	scanf("%d", &n);

	if (n > 0)
	{
		printf("%d is positive.\n", n);
	}
	else if (n == 0)
	{
		printf("%d is Zero.\n", n);
	}
	else
	{
		printf("%d is negative.\n", n);
	}

	return (0);
}
