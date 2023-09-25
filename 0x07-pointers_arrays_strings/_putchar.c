#include <unistd.h>
/**
 * _putchar - Function will print character to stdout
 *
 * @c: Character to print
 * Return: Always success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
