#include "main.h"
#include <stdio.h>
/**
 * _strchr - func searches char
 *
 * @s: pointer to strings
 * @c: character to check
 * Return: First occurance of char to string
 */
char *_strchr(char *s, char c)
{
	if (s == NULL)
	{
		return (NULL);
	}
	while (*s != '\0')
	{
		if (*s == c)
		return (s);
		s++;
	}
	return (NULL);
}
