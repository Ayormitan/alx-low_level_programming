#include <stdio.h>
#include <stdlib.h>
/**
 * main - code entry point
 *
 * @argc: Counts number of argument passed to the function
 *@argv: Ponter to the argument passed
 *Return: Always succ
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
