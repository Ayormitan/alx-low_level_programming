#include "main.h"
void _printrev_recursion(char *s)
{
	if (*s != '\0')
	{
		_printrev_recursion(s + 1);
		_putchar(*s);
	}
	else
	{
		return;
	}
}
