#include "main.h"

/**
 * _islower - entry point
 * @c: the parameter for letter testing
 * Return: 1 if lowercase or 0 if not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
