#include "main.h"
#include <stdio.h>
/**
 * _strchr - func searches char
 *
 * @s: pointer to strings
 * @n: character to check
 * Return: First occurance of char to string
 */
char *_strchr(char *s, char n)
{
	while (*s != '\0')
	{
		if (*s == n)
		return (s);
		s++;
	}
	return (NULL);
}
