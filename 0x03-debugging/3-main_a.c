#include <stdio.h>
#include "main.h"
/**
 * main - code entry point takes a date and prints numbers of day remaining
 * putting leap year into account
 * Return: ALways success
 */
int main(void)
{
	int day;
	int month;
	int year;

	day = 01;
	month = 4;
	year = 1997;
	printf("Date: %2d/%2d/%4d\n", month, day, year);
	
	day = convert_day(day, month);
	print_remaining_days(month, day, year);
	return (0);
}
