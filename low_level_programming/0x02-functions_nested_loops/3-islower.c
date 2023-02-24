#include "main.h"

/**
 *_islower - Checks for lowercase character.
 *@c: character to check
 *
 *Return: Always 1 (Success), 0 otherwise.
 */
int _islower(int c)
{
if (c > 96 && c < 123)
{
	return (1);
}
else
{
	return (0);
}
}
