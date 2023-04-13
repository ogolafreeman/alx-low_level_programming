#include <stdlib.h>
#include "main.h"
/**
 * *_memset - fillis memory with a constant byte
 * @s: memory area to be filled
 * @b: char to copy
 * @n: number of lines to copy b
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}
/**
 * *_calloc - allocates memory for arrays
 * @nmemb: number of elements in array
 * @size: size of each element
 *
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *x;

	if (nmemb == 0 || size == 0)
		return (NULL);
	x = malloc(size * nmemb);
	if (x == NULL)
		return (NULL);
	_memset(x, 0, nmemb * size);
	return (x);
}
