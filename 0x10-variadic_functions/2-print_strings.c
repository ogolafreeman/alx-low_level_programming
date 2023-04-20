#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints stringd, followed by new line
 * @separator: string printed between strings
 * @n: number of strings passed to a function
 * @...: Avariable number of strings to be printed
 *
 * Description: if separator us NULL, its not printed
 * if one of the strings is NULL (nil) is printed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list s;
	char *x;
	unsigned int idx;

	va_start(s, n);

	for (idx = 0; idx < n; idx++)
	{
		x = va_arg(s, char *);
		if (x == NULL)
			printf("(nil)");
		else
			printf("%s", x);
		if (idx != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(s);
}
