#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - Function prints and sum arrays diagonally
 *
 * @a: Pointer to array matrix
 * @size: Size of the array
 * Return: Always success
 */
void print_diagsums(int *a, int size)
{
	int i;
	int principaldiag;
	int secdiag;

	principaldiag = 0;
	secdiag = 0;
	for (i = 0; i < size; i++)
	{
		principaldiag += a[i * size + i];
		secdiag += a[i * size + (size - 1 - i)];
	}
	printf("%d, ", principaldiag);
	printf("%d\n", secdiag);
}
