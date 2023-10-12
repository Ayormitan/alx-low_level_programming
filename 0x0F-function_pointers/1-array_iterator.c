#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - function name to print arrays
 *
 * @array: Elemtents of the array to print
 * @size: Array size
 * @action: Pointer to function that will be used in printing the array
 * Return: ALway success
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
