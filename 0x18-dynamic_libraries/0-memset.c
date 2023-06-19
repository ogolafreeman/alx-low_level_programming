#include "main.h"

/**
 * _memset - fill a block of memory with b
 * @s: the adress of memory to be filled
 * @b: the character to fill the memory with
 * @n: the indicated memory block
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
