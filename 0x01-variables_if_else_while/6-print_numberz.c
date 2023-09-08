#include <stdio.h>
/**
 * main - Entry pont
 *
 * Return: Always succes
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar('0' + i);
	}
	putchar('\n');
	return (0);
}
