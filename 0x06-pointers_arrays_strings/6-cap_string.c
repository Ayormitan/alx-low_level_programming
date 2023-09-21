#include "main.h"
#include <string.h>
#include <ctype.h>
/**
 * cap_string - function that cap based on behavior
 *
 *@str: Pointer to string to ca[p
 * Return: Always sucess
 */
char *cap_string(char *str)
{
	int i;
	int lenght;
	int newchar;

	newchar = 1; /** flag to indicate start of a string*/
	lenght = strlen(str); /** gets string lenght*/
	for (i = 0; i < lenght; i++)
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == ',' ||
				str[i] == ';' || str[i] == '.' || str[i] == '!' || str[i] == '?' ||
	    str[i] == '"' || str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}')
		/** check for these behaviours */
		{
			newchar = 1;
		}
		else if (newchar)
		{
			str[i] = toupper(str[i]);
			newchar = 0; /*resets flag*/
		}
		else
		{
			str[i] = tolower(str[i]);/** capitalize first letter of new char */
		}
	}
	return (str);
}
