#include "main.h"
#include <string.h>
/**
 * _strcpy - function to copy string
 *
 * @scr: source of strings
 * @dest: Destination to store string
 * Return: Always success
 */
char *_strcpy(char *dest, char *scr)
{
	strcpy(dest, scr);
	return (dest);
}
