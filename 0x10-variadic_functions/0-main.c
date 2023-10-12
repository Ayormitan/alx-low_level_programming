#include <stdio.h>
#include "variadic_functions.h"
/**
 * main - code entry point
 *
 * Return: Always success
 */
int main(void)
{
	int num;
	
	num = sum_them_all(3, 5, 13, 4);
	printf("%d\n", num);
	num = sum_them_all(4, 65, 22, 6, 45);
	printf("%d\n", num);
	num = sum_them_all(4, 98, 1024, 402, -1024);
	printf("%d\n", num);
	return (0);
}
