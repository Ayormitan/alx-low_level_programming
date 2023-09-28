#include <stdio.h>
#include "main.h"
/**
 * _puts_recursion - function recursively prints string
 *
 * @s: Character to print
 * Return: Called string
 */
void _puts_recursion(char *s)
{
	if (*s != '\0') /** check for empty string or end of strings*/
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);/** A recursive call mooves S to next char*/
	}
	else
	{
	_putchar('\n');
	}
}
