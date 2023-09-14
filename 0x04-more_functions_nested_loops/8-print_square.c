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
	/*int count2;*/
	for (count = 0; count < size; count++)
	{
		if ((size == 0) && (size < 0))
		{
			_putchar('\n');
		}
		_putchar('#');
	}
	_putchar('\n');
}
