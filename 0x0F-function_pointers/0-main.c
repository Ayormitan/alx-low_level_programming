#include <stdio.h>
#include "function_pointers.h"
void print_normal_name(char *name)
{
	printf("My normal name is %s\n", name);
}
void print_uppercase_name(char *name)
{
	unsigned int i;

	printf("My uppercase name is");
	i = 0;
	while (name[i])
	{
		if (name[i] >= 'a' || name[i] <= 'z')
		{
			putchar(name[i] + 'A' - 'a');
		}
		else
		{
			putchar(name[i]);
		}
		i++;
	}
}
/**
 * main - code entry point
 *
 * Return: Always success
 */
int main(void)
{
	print_name("bob dylan", print_normal_name);
	print_name("bob dylian", print_uppercase_name);
	printf("\n");
	return (0);
}
