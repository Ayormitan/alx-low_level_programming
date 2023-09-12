#include<stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - Prints lowercase alphabet 10 times
 *
 * Return: On succes 1, else -1 on error
 */
void print_alphabet_x10(void)
{
	char ln;

	while (ln < 10)
	{
		char ch = 'a';

		while (ch <= 'z')
		{
			putchar(ch);
			ch++;
		}
		putchar('\n');
		ln++;
	}
}
