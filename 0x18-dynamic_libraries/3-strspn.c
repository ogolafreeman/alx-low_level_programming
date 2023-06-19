#include "main.h"
/**
 * _strspn - Entry poin
 * @s: input value
 * @accept: input value
 *
 * Return: Always 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int x = 0;
	char *y;

	while (*s != '\0')
	{
		y = accept;
		while (*y != '\0')
		{
			if (*s == *y)
			{
				x++;
				break;
			}
			y++;
		}
		if (*y == '\0')
		{
			return (x);
		}
		s++;
	}
	return (x);
}
