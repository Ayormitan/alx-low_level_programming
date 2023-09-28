#include "main.h"
/**
 * _printrev_recursion - function prints strings recursively
 *
 * @s: Pointer to string to call
 * Return: Always success
 */
void _printrev_recursion(char *s)
{
	if (*s != '\0')
	{
		_printrev_recursion(s + 1);/** function calls itself using pointer*/
		/** Arithmetic before strings is outputed*/
		_putchar(*s);
	}
	else
	{
		return;
	}
}