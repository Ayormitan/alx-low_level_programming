#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - entry point of code function defination
 *
 * Return: Returnn void
 */
void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
}
