#include "main.h"
/**
 * factorial - function printt factorial of a number
 *
 * @n: Pointer to digit to check
 * Return: ALways succes
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (1);
	}
	else
	{
		return (n * (n - 1));
	}
}
