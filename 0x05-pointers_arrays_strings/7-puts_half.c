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
		lenght++;
	}
		mid = (lenght + 1) / 2;
		for (i = mid; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
}
