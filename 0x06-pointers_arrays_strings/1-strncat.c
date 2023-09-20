#include <string.h>
#include "main.h"
/**
 * _strncat - function for concatinate string
 *
 * @dest: Destination string
 * @src: String to copt
 * @n: Prints particular number of string
 * Return: Always succes
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	{
	return (dest);
	}
}
