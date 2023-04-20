#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prints anything
 * @format: list of types of arguments to the functions
 */
void print_all(const char * const format, ...)
{
	int x = 0;
	char *s, *ep = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[x])
		{
			switch (format[x])
			{
				case 'c':
					printf("%s%c", ep, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", ep, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", ep, va_arg(list, double));
					break;
				case 's':
					s = va_arg(list, char *);
					if (!s)
						s = "(nil)";
					printf("%s%s", ep, s);
					break;
				default:
					x++;
					continue;
			}
			ep = ", ";
			x++;
		}
	}
	printf("\n");
	va_end(list);
}
