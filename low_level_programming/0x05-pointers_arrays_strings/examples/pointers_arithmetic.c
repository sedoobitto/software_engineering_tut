#include <stdio.h>

/**
 * main - illustrates pointers arithmetic.
 *
 * Return: Always 0.
 */

int main(void)
{
	int array[5];

	*array = 42;
	*(array + 1) = 43;

	printf("Value of array    : %p , address of array : %p\n", array, &array);
	printf("Value of array[0] : %d , address of a[0]  : %p\n", *array,  array);
	printf("ad of array[1]        : %p\n", &(array[1]));
	printf("ad of *(array+1)      : %p\n", (array + 1));
	printf("ad at &(*(array+1)    : %p\n", &(*(array + 1)));

	return (0);
}
