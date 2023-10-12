#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
 * print_numbers - Function print numbers with seperators
 *
 * @separator: Pointer to seperator to be printed withing number
 * @n: Preceding list of argument in the variadic list
 * Return: Always success
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;
	int x;

	va_start(list, n);
	if (separator == NULL)
	{
		exit(0);/**don't print anything when null*/
	}
	for (i = 0; i < n; i++)
	{
		x = va_arg(list, int);/** retreive next argument from the*/
	/*list of int data type*/
		printf("%d", x);
		if (i < n - 1) /** check if i is not the last integer then print seperator*/
		{
			printf("%s", separator);
		}
	}
	va_end(list);
	printf("\n");
}
