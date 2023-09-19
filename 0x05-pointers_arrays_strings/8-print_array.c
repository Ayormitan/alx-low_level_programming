#include <stdio.h>
#include "main.h"
/**
 * print_array - printing arrays
 *
 *@a: pointer to arrays
 *@n: size of the array
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
