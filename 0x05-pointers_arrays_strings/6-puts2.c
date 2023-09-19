#include "main.h"
#include "string.h"
/**
 * puts2 - function to skip string
 *
 * @str: String to skip
 * Return: Always success
 */
void puts2(char *str)
{
	size_t i;

	i = 0;
	while (i < strlen(str))
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
