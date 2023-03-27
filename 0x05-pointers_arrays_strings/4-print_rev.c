#include "main.h"
/**
 * print_rev - it prints the reverse
 * @s: string
 * Return: 0
 */
void print_rev(char *s)
{
	int y = 0;
	int x;

	while (*s != '\n')
	{
		y++;
		s++;
	}
	s--;
	for (x = y; x > 0; x--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
