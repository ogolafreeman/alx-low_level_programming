#include "main.h"

/**
 * _memcpy - fill a block of memory with b
 * @dest: the adress of memory to be filled
 * @src: the character to fill the memory with
 * @n: the indicated memory block
 * Return: s
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
