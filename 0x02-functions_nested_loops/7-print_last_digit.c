#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - prints last digit
 *
 * @x: value checked
 * Return: ALways success
 */
int print_last_digit(int x)
{
	int last_digit;

	last_digit = x % 10;
	if (last_digit < 0)
	{
		last_digit = -last_digit;
	}
	_putchar(last_digit + '0');
	return (last_digit);
}
