#include "main.h"
/**
 * _strlen_recursion -returns the length of a string
 * @s: The string to be measured
 *
 * Returm: Length of the string
 */
int _strlen_recursion(char *s)
{
	int x = 0;

	if (*s == '\0')
	{
		return (0);
	}
	return 1 + _strlen_recursion(s + 1);
}
