#include <stdio.h>
#include "main.h"

/**
 * _isupper - the function checks if a letter is an uppercase
 * @c: letter to be checked
 * Return: 1 for uppercase and 0 for anything else
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
