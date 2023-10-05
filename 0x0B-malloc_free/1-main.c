#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - function test code
 *
 * Return: Always succes
 */
int main(void)
{
	char *s;

	s = _strdup("ALX SE");
	if (s == NULL)
	{
		printf("failed to alocate memory");
		return (1);
	}
	printf("%s\n", s);
	free(s);
	return (0);
}
