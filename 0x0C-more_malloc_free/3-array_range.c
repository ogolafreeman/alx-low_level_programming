#include <stdlib.h>
#include "main.h"
/**
 * *array_range - creates an array of integers
 * @min: minimum range of value stored
 * @max: maximum range of values stored
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *x;
	int y, z;

	if (min > max)
		return (NULL);
	z = max - min + 1;
	x = malloc(sizeof(int) * z);
	if (x == NULL)
		return (NULL);
	for (y = 0; min <= max; y++)
		x[y] = min++;
	return (x);
}
