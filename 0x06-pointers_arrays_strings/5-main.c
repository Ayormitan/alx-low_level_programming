#include <stdio.h>
#include "main.h"
/**
 * main - test code
 *
 * Return: ALways success
 */
int main(void)
{
	char str[] = "Look up!";
	char *ptr;
	
	ptr = string_toupper(str);
	printf("%s\n", ptr);
	printf("%s\n", str);
	return (0);
}
