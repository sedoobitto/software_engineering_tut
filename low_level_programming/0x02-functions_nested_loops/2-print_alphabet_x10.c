#include "main.h"

/**
 *print_alphabet_x10 - prints the alphabet ten times in lowercase
 *
 *Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
int i = 1;
int j;
while (i < 11)
{
for (j = 97; j < 123; j++)
{
_putchar(j);
}
_putchar('\n');
i++;
}
}
