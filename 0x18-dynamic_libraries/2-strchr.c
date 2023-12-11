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
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		return (&s[i]);
	}
	return (0);
}
