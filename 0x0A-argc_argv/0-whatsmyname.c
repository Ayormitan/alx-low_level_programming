#include <stdio.h>
#include <stdlib.h>
/**
 * main - code entry point
 *
 *@argc: Count number of arguments
 *@argv: Arguments passed
 * Return: Always succes
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
