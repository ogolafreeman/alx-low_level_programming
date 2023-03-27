#include "main.h"
/**
 * puts_half - a function that prints half  string
 * if 0dd len, n = (length_of_the_string - 1)/2
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
	int x, n, b;
	b = 0;

	for (x = 0; str[x] != '\0'; x++)
		b++;
	n = (b / 2);
	if ((b % 2) == 1)
		n = ((b + 1) / 2);
	for (x = n; str[x] != '\0'; x++)
		_putchar(str[x]);
	_putchar('\n');
}
