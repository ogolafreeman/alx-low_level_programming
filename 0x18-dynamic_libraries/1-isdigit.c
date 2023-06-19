#include <stdio.h>
#include "main.h"

/**
 * _isdigit - checks if a letter is an uppercase
 * @c: letter to be checked
 * Return: 1 for uppercase and 0 for anything else
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
