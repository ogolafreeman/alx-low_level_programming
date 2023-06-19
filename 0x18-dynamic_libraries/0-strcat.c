#include "main.h"

/**
 * _strcat - the function concatenates two strings
 * @dest: input
 * @src: input
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j;

	do {
		i++;
	} while (dest[i] != '\0');
	j = 0;
	
	do {
		dest[i] = src[j];
		i++;
		j++;
	} while (src[j] != '\0');
	dest[i] = '\0';
	return (dest);
}
