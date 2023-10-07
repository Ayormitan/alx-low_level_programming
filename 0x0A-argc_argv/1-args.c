#include <stdio.h>
#include <stdlib.h>
/**
 * main - code entry point
 *
 *@argc: Count number of arguments
 *@argv: Arguments passed
 * Return: Always succes
 */
int main(int argc, char *argv[] __attribute__ ((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
