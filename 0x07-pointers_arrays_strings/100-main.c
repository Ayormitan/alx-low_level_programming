#include <stdio.h>
#include "main.h"
/**
 * main - Test function
 *
 * Return: Always success
 */
int main(void)
{
	char *s0 = "Bob Dylian";
	char *s1 = "Robert Allen";

	printf("%s, %s\n", s0, s1);
	set_string(&s1, s0);
	printf("%s, %s\n", s0, s1);
	return (0);
}
