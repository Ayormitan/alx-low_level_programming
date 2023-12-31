#include <stdio.h>
#include "function_pointers.h"
/**
 * printnum - prints an integer
 *@ele: the integer to print
 *
 * Return: Nothing.
 */
void printnum(int ele)
{
	printf("%d\n", ele);
}
/**
 * print_hexnum - Function prints hexadecimal numbers
 *
 *@ele: Elemnt to print
 */
void print_hexnum(int ele)
{
	printf("0x%x\n", ele);
}
/**
 * main - Test function
 *
 * Return: Always success
 */
int main(void)
{
	int array[5] = {3, 4, 23, 67, 894};

	array_iterator(array, 5, &printnum);
	array_iterator(array, 5, &print_hexnum);
	return (0);
}
