#include "main.h"
/**
 * print_rev - prints reverse
 * @s: string
 * Return: 0
 */
void print_rev(char *s)
{
	int y = 0;
	int z;

	while (*s != '\0')
	{
		y++;
		s++;
	}
	s--;
	for (z = y; z > 0; z--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
