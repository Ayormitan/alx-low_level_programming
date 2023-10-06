#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - Function allocates memory space
 *
 * @b: variable size
 * Return: Always success
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
		if (ptr == NULL)
		{
			exit(98);
		}
		return (ptr);
}
