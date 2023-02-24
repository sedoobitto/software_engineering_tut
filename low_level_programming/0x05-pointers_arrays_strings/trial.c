#include <stdio.h>
#include <string.h>
#include <unistd.h>

/**
 * main - Prints the value of a string
 *
 * Return: Always 0.
 */

void rev_string(char *s)
{
        int i;
	unsigned long int len;
        char c;
	char str[20] = {0};

        len = strlen(s);

        for (i = 1; i <= len; i++)
        {
                c = *(s + (len - i));
                str += putchar(c);
        }
	for (i = 0; i <= (len - 1); i++)
	{
		*(str + i) = '*(c + i)'
	}
  strcpy(s,str);
}

  
int main(void)
{
    char s[10] = "My School";

  int len = strlen(s);
  printf("%s\n", s);
  printf("%d\n", len);
  printf("%c\n", *(s));
  printf("%c\n", *(s+(len -1)));

    printf("%s\n", s);
    rev_string(s);
   // printf("%s\n", s);
    return (0);

}
