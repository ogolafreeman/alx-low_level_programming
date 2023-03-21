#include "main.h"
/**
 * print_alphabet_x10 - prints all alphabets 10 times
 *
 * Return: Always 0 (success)
 */
void print_alphabet_x10(void)
{
	int x = 0;

	while (x <= 10)
	{
		char xy = 'a';

		while (xy <= 'z')
		{
			_putchar(xy);
			xy++
		}
		x++;
	}
	_putchar('\n');
}
