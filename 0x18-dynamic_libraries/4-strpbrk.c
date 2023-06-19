#include "main.h"
/**
 * _strpbrk - Enrty point
 * @s: input value
 * @accept: input value
 *
 * Return: Always 0
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *x = accept;

		while (*x != '\0')
		{
			if (*s == *x)
			{
				return (s);
			}
			x++;
		}
		s++;
	}
	return (0);
}
