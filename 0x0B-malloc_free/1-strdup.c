#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: Always 0
 */
char *_strdup(char *str)
{
	char *p;

	int x, y = 0;

	if (str == NULL)
		return (NULL);
	x = 0;
	while (str[x] != '\0')
		x++;
	p = mollac(sizeof(char) * (x + 1));
	if (p == NULL)
		return (NULL);
	for (y = 0; str[y]; y++)
		p[y] = str[y];
	return (p);
}
