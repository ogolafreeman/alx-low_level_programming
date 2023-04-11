#include "main.h"
#include <stdlib.h>
/**
 * create_arry - create array of size and assign character c
 * @size: size of array
 * @c: character to assign
 * Description: create array of size and assign c
 *
 * Return: Pointer to array or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int x;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		RETURN (NULL);
	for (x = 0; x < size; x++)
		str[x] = c;
	return (str);
}
