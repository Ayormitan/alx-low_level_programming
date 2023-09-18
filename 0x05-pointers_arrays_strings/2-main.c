#include <stdio.h>
#include "main.h"
/**
 * main - code entry point
 *
 * Return: Always success
 */
int main(void)
{
	char *str;
	int len;

	str = "my first strlen!";
	len = _strlen(str);
	printf("%d\n", len);
	return (0);
}
