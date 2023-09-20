#include <unistd.h>
/**
 * _putchar - function to print to stdout
 *
 * @c: Character to print
 * Return: ALway success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
