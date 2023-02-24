#include <stdio.h>

/**
 * main - dereferencing pointers.
 *
 * Return: Always 0.
 */

int main(void)
{
	int n;
	int *p;

	n = 16;
	p = &n;

	printf("Value of 'n'  : %d\n", n);
	printf("Address of 'n': %p\n", &n);
	printf("Value of 'p'  : %p\n", p);

	*p = 20;/**
		*this dereferences p which was pointing to n's address and
		* manipulates the value stored in at that address,changing it to 20
		*/
	printf("Value of 'n'  : %d\n", n);
	printf("value of 'p'  : %p\n", p);
	printf("address of 'n': %p\n", &n);
	printf("Value of '*p' : %d\n", *p);

	return (0);
}
