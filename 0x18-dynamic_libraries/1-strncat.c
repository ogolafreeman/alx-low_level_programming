#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: input
 * @src: input
 * @n: input
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	do {
		i++;
	} while (dest[i] != '\0');
	j = 0;
	do {
		dest[i] = src[j];
		i++;
		j++;
	} while (j < n && src[j] != '\0');
	dest[i] = '\0';
	return (dest);
}
