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
	int i;
	char *string, *separator = "";
	va_list lists;

	i = 0;
	va_start(lists, format);
	if (format)
	{
	while (format[i])
	{
		switch (format[i])
		{
		case 'i':
			printf("%s%d", separator, va_arg(lists, int));
			break;
		case 'c':
			printf("%s%c", separator, va_arg(lists, int));
			break;
		case 'f':
			printf("%s%f", separator, va_arg(lists, double));
			break;
		case 's':
			string = va_arg(lists, char *);
				if (!string)
				{
					string = "(nil)";
					printf("%s%s", separator, string);
				}
			break;
		default:
			i++;
			continue;
		}
		separator = ", ";
		i++;
	}
	}
	printf("\n");
	va_end(lists);
}
