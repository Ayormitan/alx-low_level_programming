#include "main.h"
#include <string.h>
/**
 * _strcat - function that concatenate string
 *
 * @dest: Where to place concatenated string
 * @src: Source string to be copied
 * Return: Concatenated string on success
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
