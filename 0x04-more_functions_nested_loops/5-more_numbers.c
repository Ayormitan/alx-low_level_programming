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

	i = 1;
	while (i <= 10)
	{
		j = 0;
		while (j <= 14)
		{
			if (j >= 10)
			{
				_putchar(j / 10 + '0');
				_putchar(j % 10 + '0');
			}
			else
			{
				_putchar(j + '0');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
