#include "main.h"
/**
 * get_endianness - chechs if a machine is of big or
 * little endian
 *
 * Return: Always 0 for big or 1 for little
 */
int get_endianness(void)
{
	unsigned int x = 1;

	char *c = (char *) &x;

	return (*c);
}
