#include <stdio.h>
/**
 * main - code entry point
 *
 * Return: Alway success
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 8; i++)
	{
		for (j = 1; j <= 9; j++)
		{
		putchar('0' + i);
		putchar('0' + j);
		if (i < 8 || j < 9)
			{
			putchar(',');
			putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
