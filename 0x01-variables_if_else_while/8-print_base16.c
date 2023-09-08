#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always succes
 */
int main(void)
{
	int i;
	char ch = 'a';

	for (i = 0; i <= 9; i++)
	{
		putchar('0' + i);
	}
	while (ch <= 'f')
	{
	putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
