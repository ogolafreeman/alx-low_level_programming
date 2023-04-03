#include "main.h"
/**
 * print_chesboard - Prints a chessboard arranged in order
 * @a - array
 * Return: Always 0
 */
void print_chessbaord(char (*a)[8])
{
	int m, n;

	for (m = 0; m < 8; m++)
	{
		for (n = 0; n < 8; n++)
			_putchar(a[m][n]);
		_putchar('\n');
	}
}
