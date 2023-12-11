#include "main.h"
#include "stddef.h"
/**
 * _strncpy - function that copy a max number of string
 *
 * @dest: Where to place copied string
 * @src: String to be copied
 * @n: Max number to copy
 * Return: Always success
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	if (dest == NULL || src == NULL || n == 0)
	{
		return (dest);
	}
	while (i < n && src[i] != '\0')/** checks if character reach max no */
			/*give && if it reaches NULL terminator*/
	{
		dest[i] = src[i]; /** Copies char to dest*/
		i++;
	}
	while (i < n)/* if loop ends and we've not reached */
		/* null char pad dest with null */
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
