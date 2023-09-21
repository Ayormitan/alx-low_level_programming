#include "main.h"
#include <string.h>
#include <ctype.h>
/**
 * string_toupper - function converts strings to UPPER CASE
 *
 * @s: Pointer to the string
 * Return: Converted strings
 */
char *string_toupper(char *s)
{
	int i;
	int lenght;

	lenght = strlen(s);/**lenght of strings saved for traversing at index i*/
	for (i = 0; i < lenght; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = toupper(s[i]);/**library function converts strings*/
		}
	}
	return (s);
}
