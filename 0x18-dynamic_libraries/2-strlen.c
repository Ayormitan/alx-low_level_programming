#include "main.h"
#include <string.h>
/**
 * _strlen - function to check leght of string
 *
 * @s: pointer to string to check
 * Return: Always succes
 */
int _strlen(char *s)
{
	int len;

	for (len = 0; *s != '\0'; len++)
	{
		s++;
	}
	return (len);
}
