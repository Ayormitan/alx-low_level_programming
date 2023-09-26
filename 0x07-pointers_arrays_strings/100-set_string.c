#include "main.h"
#include <stdio.h>
/**
 * set_string - set pointer to char
 *
 * @s: Pointer to be pointed to
 * @to: Char to set
 * Return: Always success
 */
void set_string(char **s, char *to)
{
	if (s != NULL)
	{
		*s = to;
	}
}
