#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - Name of the function
 *
 * @name: First argument i;e the name to be passed to the function
 * @f: Function to pointer
 * Return: ALways success
 */
void print_name(char *name, void(*f)(char *))
{
	if (f == NULL || name == NULL)
	{
		exit(0);
	}
	f(name);
}
