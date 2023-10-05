#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - Using malloc to create array
 *
 *@size: Size of buffer
 *@c: Charater to print
 *Return: Always success
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr = malloc(sizeof(char) * size); /** Pointer to*/
	/*dynmically allocated arr*/
	if (size == 0) /** checks for empty memory*/
	{
		return (NULL);
	}
	if (arr == 0) /** check invalid buffer*/
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)/**tranvers size of array then*/
		/*store char into pointer to arr*/
		arr[i] = c;
	{
		return (arr);
	}
}
