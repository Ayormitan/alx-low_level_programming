#include "main.h"
#include <stdio.h>
/**
 * function to print integer
 *
 * @n: Digit to check for
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10 != 0)
	{
		print_number(n / 10);
	}
	_putchar('0' + n % 10);
}
