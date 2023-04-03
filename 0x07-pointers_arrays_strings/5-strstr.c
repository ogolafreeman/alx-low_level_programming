#include "main.h"
/**
 * _strstr - Entry point
 * @haystack: input value
 * @needle: input value
 *
 * Return: Always 0
 */
char *_strstr(char *haystack, char *needle)
{
	char *a, *b, *c;

	if (*needle == '\0')
	{
		return (haystack);
	}
	while (*haystack != '\0')
	{
		a = haystack;
		b = needle;

		while (*a != '\0' && *b != '\0' && *a == *b)
		{
			a++;
			b++;
		}
		if (*b == '\0')
		{
			return (haystack);
		}
		c = haystack;
		haystack++;
	}
	return (0);
}
