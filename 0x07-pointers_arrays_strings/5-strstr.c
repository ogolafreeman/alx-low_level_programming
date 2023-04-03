#include "main.h"
/**
 * _strstr - Entry point
 * @haystack: input value
 * @needle: input value
 *
 * Return: Always 0
 */
char *_string(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *x = haystack;
		char *y = needle;

		while (*x == *y && *y != '\0')
		{
			x++;
			y++;
		}
		if (*y == '\0')
		{
			return (haystack);
		}
	}
	return (0);
}
