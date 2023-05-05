#include "main.h"
/**
 * flip_bits - counts the number of the bits to be changed
 * from another number
 * @n: first value
 * @m: second value
 *
 * Return: number of bits to be changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int low, cnt = 0;
	unsigned long int crnt;
	unsigned long int exclusive = n ^ m;

	for (low = 63; low >= 0; low--)
	{
		crnt = exclusive >> low;
		if (crnt & 1)
			cnt++;
	}
	return (cnt);
}
