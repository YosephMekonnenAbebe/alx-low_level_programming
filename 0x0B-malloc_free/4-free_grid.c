#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_grid - Starting point
 * @grid: input 1
 * @height: input 2
 * Return: the free grid
 */
void free_grid(int **grid, int height)
{
	int k =0;

	if (grid != NULL || height != 0)
	{
		while (k < height)
		{
			free(grid[k]);
			k++;
		}
	free(grid);
	}
}
