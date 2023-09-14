#include <stdio.h>
#include "main.h"
/**
 *
 *
 *
 *
 *
 */
void print_diagonal(int n)
{
	int count;
	int count2;

	if ((n == 0) && (n < 0))
	{
		_putchar('\n');
	}
		else
		{
	for (count = 0; count < n; count++)
		{	
		for (count2 = 0; count2 < n; count2++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
		}
		}
}
