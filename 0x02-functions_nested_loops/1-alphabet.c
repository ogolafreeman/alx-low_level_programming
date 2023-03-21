#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always return 0 (success)
 */
void print_alphabet(void)
{
	char xy = 'a';

	while (xy <= 'z')
	{
		_putchar(xy);
		xy++;
	}
	_putchar('\n');
	return (0);
}
