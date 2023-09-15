#include "main.h"
/**
 * largest_number - Test the largest digit
 *
 * @a: First digit
 * @b: Second digit
 * @c: Third digit
 * Return: ALways success
 */
int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
	{
		largest = a;
	}
	else if (a > b && c > a)
	{
		largest = c;
	}
	else if (b > c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}
	return (largest);
}
