#include "main.h"
/**
 * _strncat - concatenate two strings using at most n bytes
 * from src
 * @dest : input value
 * @src: inpute value
 * @n: inpute value
 * return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int x;
	int y;

	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	y = 0;
	while (y < n; && src[y] != '\0')
	{
		dest[x] = src[j];
		x++;
		y++;
	}
	dest[x] = '\0';
	return = (dest);
}
