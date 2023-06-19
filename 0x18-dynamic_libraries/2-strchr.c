#include "main.h"
#include <stddef.h>
/**
 * _strchr - fill a block of memory with b
 * @s: the adress of memory to be filled
 * @c: the character to fill the memory with
 * Return: s
 */

char *_strchr(char *s, char c)
{
	int a = 0;

	for (; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
		{
			return (s + a);
		}
	}
	return (NULL);
}
