#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s[] = "Hello everyone but you LOL!";


    printf("%s\n", s);
    printf("length of string: %lu\n", strlen(s));
    rev_string(s);
    printf("%s\n", s);
    return (0);
}
