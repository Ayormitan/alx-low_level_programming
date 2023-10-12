#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * sum_them_all - function sums variadic function
 *
 * @n: Preceding last numbers in the arguments
 * Return: Sum of variadic number
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list; /**declares list of argumnent*/
	unsigned int i;
	int sum;

	va_start(list, n);/** takes list of arg and last number of arg*/
	sum = 0;
	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		sum += va_arg(list, int);/**sum the list of avo:wq*/
	/*ailable arguments with int type*/
	}
	va_end(list);/** end access to the list of arguments*/
	return (sum);
}
