#include <stdio.h>
#include "main.h"
/**
 * _strspn - function checks matching character
 *
 * @s: Strings to check
 * @accept: Second string value checked
 * Return: Always success
 */
unsigned int _strspn(char *s, char *accept)
{
	int j = 0;
	int i = 0;
	unsigned int a = 0;

	while (s[i] != ' ' && s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				a++;
			}
				j++;
			}
		i++;
		j = 0;
	}
	return (a);
}
