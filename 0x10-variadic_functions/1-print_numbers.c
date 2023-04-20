#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers followed by new line
 * @separator: the string to be printed between numbers
 * @n: integers passed to the function
 * @...: variable number of numbers to be printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list x;
	unsigned int idx;

	va_start(x, n);

	for (idx = 0; idx < n; idx++)
	{
		printf("%d", va_arg(x, int));

		if (idx != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(x);
}
