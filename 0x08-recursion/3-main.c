#include <stdio.h>
#include "main.h"
/**
 * main - code entry point
 *
 *Return: Always success
 */
int main(void)
{
	int r;

	r = factorial(1);
	printf("%d\n", r);
	r = factorial(-100);
	printf("%d\n", r);
	r = factorial(21);
	printf("%d\n", r);
	r = factorial(0);
	printf("%d\n", r);
	return (0);
}
