#include "main.h"
#include <stdio.h>
/**
 * main - Function to test code
 *
 * Return: Always success
 */
int main()
{
	char c;
	
	c = 'A';
	printf("%c: %d\n", c, _isupper(c));
	c = 'a';
	printf("%c: %d\n", c, _isupper(c));
	return (0);
}
