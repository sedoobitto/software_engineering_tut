#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - prints out the remaining days of the year
 * taking account of leap years
 *@day: day of the month
 *@month: month of the year
 *@year: year
 *
 * Return: void
 */

void print_remaining_days(int day, int month, int year)
{
if (year % 4 == 0)
{
	if (month > 2)
	{
		printf("Day of the year is: %03d\n", (day += 1));
		printf("Days remaining: %03d\n", (366 - (day += 1)));
	}
	else
	{
		printf("Day of the year is: %03d\n", day);
		printf("Days remaining: %03d\n", (366 - day));
	}
}
else
{
	printf("Day of the year is: %03d\n", day);
	printf("Days remaining: %03d\n", (365 - day));
}
}
