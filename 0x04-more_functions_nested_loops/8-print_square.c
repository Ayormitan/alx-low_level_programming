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
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int count;
		int count2;

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
