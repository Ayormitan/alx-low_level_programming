#include "main.h"
/**
 * _strcmp - Function will compare strings
 *
 * @s1: pointer t first string
 * @s2: pointer to second string
 * Return: Always sucess
 */
int _strcmp(char *s1, char *s2)
{
	/** loop as long as s1 and s2 are not null terminted and are not equal*/
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	/**check if s1 and s2 are equal, we used * operator cause*/
	/** were not checking memory storage*/
	if (*s1 == *s2)
	{
		return (0);
	}
	else
	{
		return (*s1 - *s2);
	}
}
