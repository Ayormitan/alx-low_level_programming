#include <stdio.h>
#include "main.h"
/**
 * print_line - funtion to print line
 *
 *@n: number of line to print
 * Return: Always success
 */
void print_line(int n)
{
	int count;

	count = 0;
	while (count < n)
	{
		if ((n == 0) && (n < 0))
		{
			_putchar('\n');
		}
		_putchar('_');
		count++;
	}
	_putchar('\n');
}
