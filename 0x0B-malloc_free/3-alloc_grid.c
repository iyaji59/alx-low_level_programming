#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid - 2 dimensional array of integers
 * @width: grid width
 * @height: grid height
 * Return: return a grid
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int a;
	int b;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = (int **)malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);
	for (a = 0; a < height; a++)
	{
		grid[a] = (int *)malloc(sizeof(int) * width);
		if (grid[a] == NULL)
		{
			for (b = 0; b < a; b++)
			{
				free(grid[b]);
			}
			free(grid);
		}
	}
	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
		{
			grdi[a][b] = 0;
		}
	}
	return (grid);
}
