#include <stdio.h>
#include "main.h"

/**
 * calendar - Prints the remaining days left in the year
 *
 * Return: 0
 */
int main(void)
{
	int day, month, year;

	printf("Enter date DD/MM/YY: ");
	scanf("%02d/%02d/%04d", &day, &month, &year);
	printf("Date entered: %02d/%02d/%04d \n", day, month, year);

	day = convert_day(day, month);

	print_remaining_days(day, month, year);
return (0);
}
