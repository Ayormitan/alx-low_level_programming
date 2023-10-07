#include <stdio.h>
#include <stdlib.h>
/**
 * main - code entry point
 *
 *@argc: Argument passed to program
 *@argv: Pointer to arguments passed
 *Return: Always success
 */
int main(int argc, char *argv[])
{
	int first;
	int second;
	int mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (-1);
	}
	{
		first = atoi(argv[1]);
		second = atoi(argv[2]);
		mul = first * second;
	}
	printf("%d\n", mul);
	return (0);
}
