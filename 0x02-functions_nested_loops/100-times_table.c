#include "main.h"
/**
 * print_times_table
 *
 * @n: number of the times table
 */
void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
		int x = 0;

		while (x <= n)
		{
			int y = 0;
			int z;

			while (y <= n)
			{
				z = y * x;

				if (y == 0)
				{
					_putchar(z + '0')
				}
				else if (z < 10 && y != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(z + '0');
				}
				else if (z >= 10 && z < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((z / 10) + '0');
					_putchar((z % 10) + '0');
				}
				else if (z >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((z / 100) + '0');
					_putchar(((z / 10) % 10) + '0');
					_putchar((z % 10) + '0');
				}
			}
			y++;
		}
		_putchar('\n');
		x++;
	}
}
