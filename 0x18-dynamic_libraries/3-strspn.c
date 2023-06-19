#include "main.h"

/**
 * _strspn - fill a block of memory with b
 * @s: the adress of memory to be filled
 * @accept: the character to fill the memory with
 * Return: s
 */

unsigned int _strspn(char *s, char *accept)
{
	int a = 0, counter = 0;
	int n;

	do {
		for (n = 0; accept[n]; n++)
		{
			if (accept[n] == s[a])
			{
				counter++;
				break;
			}
			else if (accept[n + 1] == '\0')
			{
				return (counter);
			}
		}
		a++;
	} while (s[a] != '\0');
	return (counter);
}
