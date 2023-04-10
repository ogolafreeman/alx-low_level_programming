#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @dest: input value
 * @src: input value
 * @n: bytes from the memory area
 *
 * Return: Always dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *x = dest;
	char *y = src;

	while (n--)
	{
		*x++ = *y++;
	}
	return (dest);
}
