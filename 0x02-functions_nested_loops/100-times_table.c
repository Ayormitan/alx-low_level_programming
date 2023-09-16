#include "main.h"
#include <stdio.h>
/**
 *
 *
 */
void print_times_table(int n)
{
	int rows;
	int columbs;

	if (n > 15 || n < 0)
	{
		return;
	}
	for (rows = 0; rows <= n; rows++)
	{
		for (columbs = 0; columbs <= n; columbs++)
		{
			_putchar('0' + rows * columbs);
		if (columbs < n)
		{
			_putchar(',');
			_putchar(' ');
		}
		}
		putchar('\n');
	}
}
