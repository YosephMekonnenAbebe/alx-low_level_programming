#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Entry point
 * @width: rows of matrix to benserted
 * @height: columns of a given matrix
 * Return: a pointer
 */
int **alloc_grid(int width, int height)
{
	int **mat; 
	int l, m, n;
	int *o;

	if (width <= 0 || height <= 0)
		return (NULL);
	mat = (int **)malloc(height * sizeof(int *));
	if (mat == NULL)
		for (l = 0; l <height; l++)
		{
			*(mat + l) = (int *)malloc(width * sizeof(int));
			if (*(mat + i) == NULL)
			{
				for (l = 0; l <height; l++)
				{
					o = mat[l];
					free(o);
				}
				free(mat);
				return (NULL);
			}
		}
		for (n = 0; n < height; n++)
		{
			for (m = 0; m < width; m++)
			{
				mat[n][m] = 0;
			}
		}
		return (mat);
}	
