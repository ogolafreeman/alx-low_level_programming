#include "main.h"

/**
 * _strlen - a function that updates
 * @s: input
 * Return: count
 */

int _strlen(char *s)
{
	int count = 0;

	do {
		count++;
		s++;
	} while (*s != '\0');
	return (count);
}
