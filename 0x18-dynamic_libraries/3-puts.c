#include "main.h"

/**
 * _puts - a function that updates
 * @str: input
 * Return: n
 */

void _puts(char *str)
{
	do {
		_putchar(*str++);
	} while (*str != '\0');
	_putchar('\n');
}
