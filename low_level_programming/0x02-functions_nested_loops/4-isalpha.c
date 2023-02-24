#include "main.h"

/**
 * _isalpha - Check for alphabetic character.
 * @c : Character to check.
 *
 * Return: 1 if success, 0 otherwise.
 */
int _isalpha(int c)
{
if (c > 64 && c < 123)
{
	return (1);
}
else
{
	return (0);
}
_putchar('\n');
}
