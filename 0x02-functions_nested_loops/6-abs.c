#include <stdio.h>
#include "main.h"
/**
 * _abs - Func to check absolute int
 *
 *@n: value to check
 *Return: Alway -n or b on success
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
