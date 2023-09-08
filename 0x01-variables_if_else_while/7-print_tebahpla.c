#include <stdio.h>
/**
 * main - code entry point
 *
 * Return: Always succes
 */
int main(void)
{
	char  ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
