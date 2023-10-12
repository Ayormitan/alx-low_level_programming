#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - function prints all data type
 *@format: list of arg types
 *Return: the specific types
 */
void print_all(const char * const format, ...)
{
	int typei;
	char typec;
	float typef;
	char *string;
	va_list lists;
	const char *format_ptr = format; /**non constant ptr iterate the string*/

	va_start(lists, format);
	while (*format_ptr)
	{
		if (*format_ptr == 'i')
		{
			typei = va_arg(lists, int);
				printf("%d, ", typei);
		}
		else if (*format_ptr == 'c')
		{
			typec = va_arg(lists, int);
				printf("%c, ", typec);
		}
		else if (*format_ptr == 'f')
		{
			typef = va_arg(lists, double);
				printf("%f, ", typef);
		}
		else if (*format_ptr == 's')
		{
			string = va_arg(lists, char *);
				if (string != NULL)
				{
					printf("%s", string);
				}
				else
				{
					printf("(nil)");
				}
		}
		else
		{
			printf("ignore format");
		}
		format_ptr++;
	}
	va_end(lists);
	printf("\n");
}
