#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: input string.
 *
 * Return: No return.
 */

void rev_string(char *s)
{
	int i, len;
	char c, str;

	len = strlen(s);

	for (i = 1; i <= len; i++)
	{
		c = *(s + (len - i));
		str += _putchar(c);
	}

	strcpy(s,str);
}
