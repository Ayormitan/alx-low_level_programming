#include <stdio.h>
#include "main.h"
/**
 * print_square - printing squares
 *
 *@size: square to print
 * Return: Always success
 */
void print_square(int size)
{
	int count;
	int count2;

	if ((size == 0) && (size < 0))
	{
		_putchar('\n');
	}
	else
	{
		for (count = 0; count < size; count++)
		{
			for (count2 = 0; count2 < size; count2++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
