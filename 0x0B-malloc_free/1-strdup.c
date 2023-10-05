#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - Function duplicates string
 *
 * @str: pointer to duplicated string
 * Return: Always success
 */
char *_strdup(char *str)
{
	int size;
	char *duplicorg;
	char *duplic;

	if (str == NULL)
	{
		return (NULL);
	}
	size = strlen(str);
	duplic = malloc(sizeof(char) * size + 1);
	if (duplic == NULL)
	{
		return (NULL);
	}
	duplicorg = duplic;
	while (*str)
	{
		*duplicorg = *str;
		duplicorg++;
		str++;
	}
	*duplicorg = '\0';
	return (duplic);
}
