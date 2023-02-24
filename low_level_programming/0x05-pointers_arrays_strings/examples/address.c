#include <stdio.h>

/**
 * main - Prints address of variables
 *
 * Return: Always 0.
 */

int main(void)
{
	int a;
	char b;
	float c;
	int *p;

	printf("Address of variable 'a' : %p\n", &a);
	printf("Address of variable 'b' : %p\n", &b);
	printf("Address of variable 'c' : %p\n", &c);
	printf("Address of pointer 'p' : %p\n", &p);

	int n; 
	int *ptr;

	n = 16;
	ptr = &n;

	printf("Value of n: %d\n", n);
	printf("Address of n: %p\n", &n);
	printf("Value of p: %p\n", ptr);

	return (0);
}
