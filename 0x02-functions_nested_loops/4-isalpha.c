#include <stdio.h>
#include "main.h"
/**
 * _isalpha - function to print letters
 *
 * Return: On succes  1, else 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
