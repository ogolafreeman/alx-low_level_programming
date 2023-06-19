#include "main.h"

/**
 * _isalpha - entry point
 * @c: the parameter for letter testing
 * Return: 1 if lowercase or 0 if not
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
