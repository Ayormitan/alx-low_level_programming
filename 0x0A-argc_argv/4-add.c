#include <stdio.h>
#include <stdlib.h>
/**
 * main - code entry point
 *
 *@argc: Number of parameters
 *@argv: Poniteer to passed arguments
 *Return: Allways success
 */
int main(int argc, char *argv[])
{
	int i;
	int sum;

	for (i = 0; i < argc; i++)
	{
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
