#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make the grid
 * @width: input
 * @height : input
 * Return: Pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **p;
	int a, b;

	if (width <= 0 || height <= 0)
		return (NULL);
	p = malloc(sizeof(int *) * height);
	if (p == NULL)
		return (NULL);
	for (a = 0; a < height; a++)
	{
		p[a] = malloc(sizeof(int) * width);
		if (p[a] == NULL)
		{
			for (; a >= 0; a--)
				free(p[a]);
			free(p);
			return (NULL);
		}
	}
	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
			p[a][b] = 0;
	}
	return (p);
}
