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
                if (i == 0)/** check if the first char is upper else */
                {
                        if (str[i] >= 'a' && str[i] <= 'z')
                        {
                                str[i] = toupper(str[i]);/** library function*/
                                /**to make upper char*/
                        }
                }
                else if (isspace(str[i]) || isdigit(str[i]) || ispunct(str[i])) /** library*/
                        /** function will check for space, digit and puntuations*/
                {
                        newchar = 1;
                }
                else
                {
                        if (newchar) {
                        str[i] = toupper(str[i]);/** capitalize first letter of new char */
                        newchar = 0; /** resets flag */
                        }
                }
        }
        return (str);
} 
