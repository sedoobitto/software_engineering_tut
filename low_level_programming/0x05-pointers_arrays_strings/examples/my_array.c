#include <stdio.h>

/**
 * main - an array of integers.
 *
 * Return: Always 0.
 */

int main(void)
{
	int n[10];
	int j, i;

	for (i = 0; i < 10; i++)
	{
		n[i] = i + 100;
	}

	for (j = 0; j < 10; j++)
	{
		printf("Element[%d] : %d : %p\n", j, n[j], &n[j]);
	}

	printf("&n[0] : %p\n", &n[0]);
	printf("n : %p   : %lu\n", n, sizeof(n));
	printf("&n : %p  : %lu\n", &n, sizeof(&n));

	return (0);
}