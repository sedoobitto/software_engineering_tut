#include <stdio.h>

/**
 * main - manipulating values in memory using pointers
 *
 * Return: Always 0.
 */
int main(void)
{
	int a[5];
	int *p;
	int *p2;
	int i;

	*a = 98;
	*(a + 1) = 198;
	*(a + 2) = 298;
	a[3] = 398;
	*(a + 4) = 498;

	for (i = 0; i < 5; i++)
	{
		printf("%d, ", a[i]);
	}
	p = a + 1;
	*p = 98;
	printf("\n (a+1) : %d , *p : %d\n", *(a + 1), *p);

	p2 = a + 3;
	*p2 = *p + 1337;
	for (i = 0; i < 5; i++)
	{
		printf("%d, ", a[i]);
	}
	return (0);
}
