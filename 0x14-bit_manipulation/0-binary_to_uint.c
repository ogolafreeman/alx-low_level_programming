#include "main.h"
/**
 * binary_to_uint - converts a binary to unsigned unit
 * @b: string containing the binary.
 *
 * Return: Always the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int x;
	unsigned int decimal = 0;

	if (!b)
	{
		return (0);
	}
	for (x = 0; b[x] != '\0'; x++)
	{
		if (b[x] == '1')
		{
			decimal = decimal << 1;
			decimal = decimal | 1;
		}
		else if (b[x] == '0')
		{
			decimal = decimal << 1;
		}
		else
		{
			return (0);
		}
	}
	return (decimal);
}
