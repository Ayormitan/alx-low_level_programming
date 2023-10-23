#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * argstostr - code entry point
 * @ac: Integer input
 * @av: Doble pointer to arrys
 * Return: Alwasy success
 */
char *argstostr(int ac, char **av)
{
	int i;
	int n;
	int r;
	int p;
	char *str;

	r = 0;
	p = 0;
	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			p++;
	}
	p += ac;
	str = malloc(sizeof(char) * p + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
	for (n = 0; av[i][n]; n++)
	{
		str[r] = av[i][n];
		r++;
	}
	if (str[r] == '\0')
	{
		str[r++] = '\n';
	}
	}
	return (str);
}
