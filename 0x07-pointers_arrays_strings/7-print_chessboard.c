#include <stdio.h>
#include "main.h"
/**
 * print_chessboard - function will print multidimensional array
 *
 * @a: Pointer to the aaray to be printed
 * Return: ALways success
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			printf("%c", a[i][j]);
		}
		printf("\n");
	}
}
