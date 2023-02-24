#include "main.h"
#include <unistd.h>


/**
 * _putchar - Prints a character to standard output
 * @c: Character to be printed
 *
 * Return: 1
 */int _putchar(char c)
{

return (write(1, &c, 1));

}
