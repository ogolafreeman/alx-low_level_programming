#include <stdio.h>
#include<stdlib.h>
#include "main.h"
/**
 * free_grid - frees 2nd array
 * @grid: second grid
 * @gheight: dimensions of the grid
 * Return: Always 0
 */
void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}
	free(grid);
}
