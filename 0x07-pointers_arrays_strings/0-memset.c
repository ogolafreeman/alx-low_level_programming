#include "main.h"
/**
 * _memset - a function that fills memory with constant byte
 * @n: is a pointer
 * @s: is a pointer
 * @b: constant byte
 *
 * Return: Always s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *a = s;

	while (n--)
	{
		*a++ = b;
	}
	return (s);
}
