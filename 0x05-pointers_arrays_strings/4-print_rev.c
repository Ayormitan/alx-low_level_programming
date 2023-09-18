#include <string.h>
#include "main.h"
/**
 * print_rev - printint reverse string
 *
 * @s: pointer to string
 * Return: Always success
 */
void print_rev(char *s)
{
	int i;
	int len;

	if (s == NULL)
	{
		return;
	}
	for (len = 0; s[len] != '\0'; len++)
	{
		len++;
	}
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
