#include "main.h"
/**
 * puts_half - Function will print last half of a string
 *
 * @str: String to output
 * Return: Always success
 */
void puts_half(char *str)
{
	char *ptr = str;
	int lenght = 0;
	int mid;

	while (*ptr != '\0')
	{
		lenght++;
		ptr++;
	}
	mid = (lenght + 1) / 2;
	ptr = str + mid;
	while (*ptr != '\0')
	{
		_putchar(*ptr);
		ptr++;
	}
	_putchar('\n');
}
