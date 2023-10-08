#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - Function concatenates string
 *
 * @s1: pointer to first string
 * @s2: Pointer to second string
 * @n: Size of string
 *Return: Always success
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = strlen(s1);
	unsigned int len2 = strlen(s2);
	unsigned int i;
	unsigned int j;
	char *ptr;

	if (n >= len1 + len2)
	{
		n = len1 + len2;
	}
	ptr =  malloc(sizeof(char) * (n + 1));
	if (ptr == NULL)
	{
		exit(1);
	}
	for (i = 0; i < len1 && i < n; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; i < n && s2[j] != '\0'; i++, j++)
	{
		ptr[i] = s2[j];
	}
	ptr[i] = '\0';
	return (ptr);
}
