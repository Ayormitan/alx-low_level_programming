#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "main.h"
/**
 * main - Test function
 *
 * Return: Always success
 */
int main(void)
{
	int *i;
	char *c;
	float *f;
	double *d;

	c = malloc_checked(sizeof(char) * 1024);
	printf("%p\n", (void *)c);
	i = malloc_checked(sizeof(int) * 402);
	printf("%p\n", (void *)i);
	f = malloc_checked(sizeof(char) * 10000000);
	printf("%p\n", (void *)f);
	d = malloc_checked(INT_MAX);
	printf("%p\n", (void *)d);
	free(c);
	free(i);
	free(f);
	free(d);
	return (0);
}
