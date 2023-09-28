#include "main.h"
/**
 * _strlen_recursion - Function recursively find stringlen
 *
 * @s: Pointer to string to check
 * Return: Always success
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')/** base case exit at this point*/
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));/** Return current*/
		/** string lenght 1 then and with pointer arithmetic to get strlen*/
	}
}
