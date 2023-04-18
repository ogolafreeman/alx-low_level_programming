#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - returns length of a string
 * @s: string to evaluate
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int x;

	x = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	return (x);
}
/**
 * *_strcpy - copies the string pointed to by src including
 * the terminating null byte to the buffer
 * pointed to by dest
 * @dest: pointer to the buffer in which it copies the string
 * @src: string to be coppied
 *
 * Return: Always return the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int a, x;

	a = 0;

	while (src[a] != '\0')
	{
		a++;
	}
	for (x = 0; x < a; x++)
	{
		dest[x] = src[x];
	}
	dest[x] = '\0';
	return (dest);
}
