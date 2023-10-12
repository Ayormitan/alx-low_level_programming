#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - Variadic function to print strings
 *
 * @separator: Pointers to seperator that will be printed within numbers
 * @n: Preceding or fixed arguments arguments before variadic arg list
 * Return: Always success
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *strings;
	va_list list;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		strings = va_arg(list, char *);/** retreives the next arguments from list*/
	/** also takes pointer to string as type*/
			if (strings == NULL)
			{
				printf("(nil)");
			}
				else
				{
				printf("%s", strings);
				}
				if (i < n - 1 && separator != NULL)/** check if the last char*/
					/*is not reached and not null*/
				{
					printf("%s", separator);
				}
	}
	printf("\n");
	va_end(list);
}
