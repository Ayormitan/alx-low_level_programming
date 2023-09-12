#include <stdio.h>
#include "main.h"
/**
 * jack_bauer - function to print time
 *
 * Return: Always succes
 */
void jack_bauer(void)
{
	int min, hour;

	for (hour = 0; hour < 24; hour++)
	{
		for (min = 0; min < 60; min++)
		{
			putchar('0' + (hour / 10));
			putchar('0' + (hour % 10));
			putchar(':');
			putchar('0' + (min / 10));
			putchar('0' + (min % 10));
			putchar('\n');
		}
	}
}
