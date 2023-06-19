#include "main.h"

/**
 * _strcpy - a function that updates a
 * pointer to 98
 * @dest: input
 * @src: input
 * Return: n
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i++] = '\0';
	return (dest);
}
