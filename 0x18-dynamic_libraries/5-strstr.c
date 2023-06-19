#include "main.h"
#include <stddef.h>

/**
 * _strstr - fill a block of memory with b
 * @haystack: the adress of memory to be filled
 * @needle: the character to fill the memory with
 * Return: s
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *a = haystack;
		char *b = needle;

		while (*a == *b && *b != '\0')
		{
			a++;
			b++;
		}

		if (*b == '\0')
			return (haystack);
		haystack++;
	}
	return (0);
}
