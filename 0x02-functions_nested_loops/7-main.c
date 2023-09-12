#include "main.h"
/**
 * main - code testing
 *
 *Return: ALways success
 */
int main()
{
	int r;

	print_last_digit(98);
	print_last_digit(0);
	r = print_last_digit(-1024);
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
