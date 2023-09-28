#include "main.h"
/**
 * _print_rev_recursion - function prints strings recursively
 *
 * @s: Pointer to string to call
 * Return: Always success
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);/** function calls itself using pointer*/
		/** Arithmetic before strings is outputed*/
		_putchar(*s);
	}
	else
	{
		return;
	}
}
