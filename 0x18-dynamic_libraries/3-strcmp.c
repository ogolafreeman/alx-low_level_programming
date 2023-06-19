#include "main.h"

/**
 * _strcmp - concatenates two strings
 * @s1: input
 * @s2: input
 * Return: dest
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	do {
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	} while (s1[i] != '\0' && s2[i] != 0);
	return (0);
}
