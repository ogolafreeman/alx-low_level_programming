#include "main.h"

/**
 * set_bit - sets bit at a given index
 * @n: pointer to a nymber to change
 * @index: index of bit to set to 1
 *
 * Return: Always 1 for success
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ((1UL << index) | *n);

	return (1);
}
