#include <stdio.h>
#include<stdlib.h>
#include "main.h"
/**
 * free_grid - frees 2nd array
 * @grid: second grid
 * @height: dimensions of the grid
 * Description: frees memory of grid
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
