#include "main.h"
#include<stdio.h>
/**
 * _islower - checks for lower character
 *
 * @c: character checked
 * Return: 1 on success, else 0 on error/failure.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
