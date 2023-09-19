#include "main.h"
/**
 * puts_half - Function will print last half of a string
 *
 * @str: String to output
 * Return: Always success
 */
void puts_half(char *str)
{
	int lenght = 0;
	int i;
	int mid;

	while (str[lenght] != '\0')
	{
		str[lenght]++;
	}
		mid = lenght / 2;
		for (i = 0; str[i] != mid; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
}
