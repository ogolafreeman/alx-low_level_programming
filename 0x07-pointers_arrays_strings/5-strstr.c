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
	int x = strlen(needle);
	int y = strlen(haystack);

	for (int z = 0; z < y; z++)
	{
		if (haystack[z] == needle[0])
		{
			int a;

			for (a = 1; a < x; a++)
			{
				if (haystack[z + a] != needle[a])
				{
					break;
				}
			}
			if (a == x)
			{
				return (&haystack[z]);
			}
		}
	}
	return (0);
}
