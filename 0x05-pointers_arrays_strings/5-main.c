#include <stdio.h>
#include "main.h"
/**
 * main - code entry point
 *
 * Return: Always success
 */
int main(void)
{
	char s[10] = "My school";

	printf("%s\n", s);
	rev_string(s);
	printf("%s\n", s);
	return (0);
}
