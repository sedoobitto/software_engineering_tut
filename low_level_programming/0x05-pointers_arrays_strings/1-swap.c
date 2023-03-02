#include "main.h"

/**
 * swap_int - Swaps the value of two integers.
 * @a: first interger.
 * @b: secong integer.
 *
 * Return: void.
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
