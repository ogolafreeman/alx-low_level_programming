#include "main.h"
/**
 * print_alphabet - print all alphabets in lowercase
 *
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
}
