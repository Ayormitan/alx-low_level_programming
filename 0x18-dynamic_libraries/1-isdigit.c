#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * _isdigit - function to chech digit
 *
 * @c: Digit to check
 * Return: 1 on success and 0 otherwise
 */
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
