#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - Function checks checks index to return digit
 * @array: Pointer to array to check
 * @size: Size of the array
 * @cmp: pointer to function used to compare value
 * Return: ALways succes
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp == NULL || array == NULL)
		exit(0);
	if (size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
		return (-1);
}
