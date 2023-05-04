#include "main.h"

/**
 * get_bit - returns the value of a bit in a decimal number
 * @n: searched number
 * @index: index of the bit
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bite;

	if (index > 63)
		return (-1);

	bite = (n >> index) & 1;

	return (bite);
}
