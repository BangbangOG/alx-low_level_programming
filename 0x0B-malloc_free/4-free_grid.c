#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees the 2d array
 * @grid: 2d grid
 * @height: the height dimension of the grid
 * Desciption: frees memory of the grid
 *
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
}
