#include "main.h"
/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int e, f;

		for (e = 1; e <= size; e++)
		{
			for (f = e; f < size; f++)
			{
				_putchar(' ');
			}

			for (f = 1; f <= e; f++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}

