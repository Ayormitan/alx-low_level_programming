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
	va_list lists;
	const char *format_ptr = format;

	va_start(lists, format);
	while (*format_ptr)
	{
		switch (*format_ptr)
		{
		case 'i':
			printf("%d", va_arg(lists, int));
			break;
		case 'c':
			printf("%c", va_arg(lists, int));
			break;
		case 'f':
			printf("%f", va_arg(lists, double));
			break;
		case 's':
		{
			char *string = va_arg(lists, char *);
				if (string)
					printf("%s", string);
				else
					printf("(nil)");
		}
		break;
		default:
			printf("ignore format");
		}
		if (*(format_ptr + 1))
			printf(", ");
		format_ptr++;
	}
	va_end(lists);
	printf("\n");
}
