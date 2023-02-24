#include <unistd.h>

/**
 * _putchar - Writes the character c to stdout
 * @c : The character to be printed
 *
 * Return: 1 on success, 0 otherwise.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
