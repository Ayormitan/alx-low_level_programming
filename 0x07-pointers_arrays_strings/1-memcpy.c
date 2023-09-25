#include "main.h"
/**
 * _memcpy - Function copies value to destination
 *
 *@src: Value to be copied
 *@dest: Area to place copied value
 *@n: Size of value copied
 *Return: Always copied value of pointer to array
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
