#include "main.h"
/**
 * clear_bit - makes the value of a given bit to 0
 * @n: pointer to the changed number
 * @index: index of the bit to clear
 *
 * Return: Always 1 for success or -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	else
		*n = (~(1UL << index) & *n);
	return (1);
}
