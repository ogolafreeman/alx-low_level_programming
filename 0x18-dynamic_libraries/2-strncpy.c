#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: input
 * @src: input
 * @n: input
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	do {
		dest[j] = src[j];
		j++;
	} while (j < n && src[j] != '\0');
	do {
		dest[j] = '\0';
		j++;
	} while (j < n);
	return (dest);
}
