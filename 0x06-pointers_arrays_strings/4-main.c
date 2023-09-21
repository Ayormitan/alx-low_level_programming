#include <stdio.h>
#include "main.h"
/**
 * printarray - function to print all element of an array
 *
 * @a: The elements in the array
 * @n: Size of the array
 */
void printarray(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (i != 0)
		{
			printf(", ");
		}
		printf("%d", a[i]);
		i++;
	}
	printf("\n");
}

/**
 * main - code test function
 *
 * Return: ALWAYS SUCCESS
 */
int main(void)
{
	int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337};

	printarray(a,(sizeof(a) / sizeof(int)));
	reverse_array(a,(sizeof(a) / sizeof(int)));
	printarray(a,(sizeof(a) / sizeof(int)));
	return (0);
}
