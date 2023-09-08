#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - entry point for the program
 *
 * Return: Always success
 */
int main(void)
{
	int n;
	int last_dig;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	last_dig = n % 10;
	printf("Last digit of %d is %d ", n, last_dig);
	if (last_dig > 5)
	{
		printf("and is greater than 5\n");
	}
	else if (last_dig == 0)
	{
		printf("and is 0\n");
	}
	else
	{
		printf("and is less than 6 and not 0\n");
	}
	return (0);
}
