#include "main.h"
#include <stdio.h>

/**
 * main - Prints the largest of 3 numbers
 *
 * Return: 0
 */

int main(void)
{
	int a, b, c, largest;

	printf("Enter 3 numbers, seperated by commas: ");

	scanf("%d, %d, %d", &a, &b, &c);

	largest = largest_number(a, b, c);

	printf("The largest of %d, %d , %d is : %d\n", a, b, c, largest);

	return (0);
}
