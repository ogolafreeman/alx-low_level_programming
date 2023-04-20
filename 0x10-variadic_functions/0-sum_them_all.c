#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns sum of all paramters
 * @n: number of parametrs passed to the functions
 * @...: a variable number of paramters to calculate sum
 *
 * Return: if n == 0 - 0 otherwise the sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list x;
	unsigned int y, z = 0;

	va_start(x, n);

	for (y = 0; y < n; y++)
		z += va_arg(x, int);
	va_end(x);

	return (z);
}
