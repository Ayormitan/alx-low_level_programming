#include <stdio.h>
/**
 * _putchar - function to print to stdout
 *
 * @c: character to print
 * Return: On error -1, 1 on success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
