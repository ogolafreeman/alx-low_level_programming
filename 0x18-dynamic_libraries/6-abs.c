#include "main.h"

/**
 * _abs - entry point
 * @c: Returns the sign of a number
 * Return: 1 , 0 or -1
 */

int _abs(int c)
{
	int absolute_val;

	if (c < 0)
	{
		absolute_val = c * -1;
		return (absolute_val);
	}
	return (c);
}
