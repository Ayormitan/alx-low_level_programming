#include "main.h"
/**
 * leet - Encoding leet
 *
 * @s: Pointer to string
 * Return: ALways encoded digit
 */
char *leet(char *s)
{
	char a[] = { 'a', 'e', 'o', 't', 'l' };
	char b[] = { 'A', 'E', 'O', 'T', 'L' };
	int n[] = { 4, 3, 0, 7, 1 };
	int i = 0;

	while (*s)
	{
		for (i = 0; i < 5; i++)
		{
			if (*s == a[i] || *s == b[i])
				*s = n[i] + '0';/**character literal ASCII value*/
		}
		s++;
	}
	return (s);
}
