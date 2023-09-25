#include <stdio.h>
#include "main.h"
/**
 * _memset - function to cange value of memory inside block
 *
 * @s: pointer to where memory is set
 * @b: Value to be copied to memset
 * @n: size of number of byte that will be copied
 * Return: The value set to memeory
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;/** set value to be copied to memory*/
	}
	return (s);
}
