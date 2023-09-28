#include "main.h"
/**
 * _pow_recursion - Recusively prints the power of a number
 *
 *@x: Pointer to base
 *@y: Pointer to power of number
 *Return: Always sucess
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
