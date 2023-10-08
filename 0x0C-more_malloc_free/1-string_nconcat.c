#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"
/**
 *
 *
 *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	int i;
	char *ptr = malloc(sizeof(char) * n);
	n = len1 + len2 + 1;

	if (n == NULL)
	{
		return (-1);
	}
	for (i = 0; i < len1; i++)
	{
		ptr[i] = s1[i];
	}
	for (i = 0; i < len2; i++)
	{
		s[len1 + 1] = s2[i];
		ptr[n - 1] = '\0';
	}
	return (ptr);
}
