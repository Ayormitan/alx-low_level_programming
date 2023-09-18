#include "main.h"
#include <stdio.h>
/**
 * print_time_table - printing time table function
 *
 *@n: Value to check
 *Return: Alway success
 */
void print_times_table(int n)
{
	int rows;
	int columbs;
	int result;

	if (n > 15 || n < 0)
	{
		return;
	}
	for (rows = 0; rows <= n; rows++)
	{
		for (columbs = 0; columbs <= n; columbs++)
		{
			result = rows * columbs;

			if (result < 10)
			{
			_putchar(result + '0');
			}
			else if (result < 100)
			{
				_putchar(result / 10 + '0');
				_putchar(result % 10 + '0');
			}
			else
			{
				_putchar(result / 100 + '0');
				_putchar((result / 100) % 10 + '0');
				_putchar(result % 10 + '0');
			}
			if (columbs < n)
			{
			_putchar(',');
			_putchar(' ');
			}
		}
		_putchar('\n');
	}
	_putchar('\n');
}
