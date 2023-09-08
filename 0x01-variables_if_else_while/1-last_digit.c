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
	if (last_dig > 5)
	{
		printf("last digit of %d is %d and is greater than 5\n", n, last_dig);
	}
	else if (last_dig == 0)
	{
		printf("last digit of %d is %d and is 0\n", n, last_dig);
	}
	else if (last_dig < 6 && last_dig != 0)
	{
		printf("last digit of %d is %d and is less than 6 and not 0\n", n, last_dig);
	}
	return (0);
}
