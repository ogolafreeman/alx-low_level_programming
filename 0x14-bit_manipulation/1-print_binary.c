#include "main.h"
#include <stdio.h>
/**
 * print_binary - prints binary equivalent of decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int a, cnt = 0;
	unsigned long int now;

	for (a = 63; a >= 0; a--)
	{
		now = n >> a;

		if (now & 1)
		{
			putchar('1');
			cnt++;
		}
		else if (cnt)
			putchar('0');
	}
	if (!cnt)
		putchar('0');
}
