#include <stdio.h>
#include "main.h"
/**
 * more_numbers - print numbers in 14 places
 *
 * Return: Always success
 */
void more_numbers(void)
{
	int i;
	int j;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j <= 14)
		{
			if (j <= 10)
			{
				_putchar('0' + i);
			}
				else
				{
					_putchar('0' + j);
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
