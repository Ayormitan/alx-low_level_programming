#include <string.h>
#include "main.h"
/**
 * rev_string - function to reverse a string
 *
 * @s: String to reverse
 * Return: Always success
 */
void rev_string(char *s)
{
	int i;
	int lenght;
	int temp;

	lenght = strlen(s);/*storing the lenght of string in lenght*/
	for (i = 0; i < lenght / 2; i++)
	{
		temp = s[i];
		s[i] = s[lenght - 1 - i];
		s[lenght - 1 - i] = temp;
	}
}
