#include "main.h"
/**
 * swap_int - function to swap digits
 *
 * @a: first digit
 * @b: Second digit
 * Return: Always success
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
