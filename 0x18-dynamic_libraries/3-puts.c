#include "main.h"
/**
 * _puts - prints string
 *
 *@str: Pointing to string
 * Return: Always success
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
	_putchar(*str);
	str++;
	}
	_putchar('\n');
}