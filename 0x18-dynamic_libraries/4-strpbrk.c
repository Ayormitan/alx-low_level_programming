#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - Function prints first occurance of a string
 *
 * @s: Pointer to the string
 * @accept: Character to search for
 * Return: Always sucess
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *temp = accept;

		while (*temp != '\0')
		{
			if (*s == *temp)
			{
				return (s);
			}
			temp++;
		}
		s++;
	}
	return (NULL);
}
