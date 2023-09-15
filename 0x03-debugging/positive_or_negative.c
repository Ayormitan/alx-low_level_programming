#include "main.h"
/**
 * positive_or_negative - Function to test for neg/pos digit
 *
 *@i: Digit to check
 *Return: Always sucess
 */
void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is greater than 0\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
	{
		printf("%d negative\n", i);
	}
}
