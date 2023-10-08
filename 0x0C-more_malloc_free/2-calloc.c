#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - Function alocaes memery
 *
 * @nmemb: Arguments passed to meory
 * @size: The size of argument
 *Return: Always success
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	size_t allsize;
	int *ptr;

	if (nmemb == 0 || size == 0)
	{
		exit(1);
	}

	allsize = nmemb * size;
	ptr = malloc(allsize);

	if (ptr == NULL)
	{
		exit(1);
	}
	memset(ptr, 0, allsize);
	return (ptr);
}
