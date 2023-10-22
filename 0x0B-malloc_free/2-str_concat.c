#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * str_concat - add together lenght of strings
 *@s1: Input first concatenate
 *@s2: second concatenate srtring
 *
 * Return: concatenated strings
 */
char *str_concat(char *s1, char *s2)
{
	char *concatenate;
	int i;
	int c;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = c = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[c] != '\0')
		c++;
	concatenate = malloc(sizeof(char) * (i + c + 1));
	if (concatenate == NULL)
		return (NULL);
	i = c = 0;
	while (s1[i] != '\0')
	{
		concatenate[i] = s1[i];
		i++;
	}
	while (s2[c] != '\0')
	{
		concatenate[i] = s2[c];
		i++, c++;
	}
	concatenate[i] = '\0';
	return (concatenate);
}
