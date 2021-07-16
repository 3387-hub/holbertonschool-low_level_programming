#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - I wrote a function that frees a 2 dimensional grid
 *previously created by your alloc_grid function.
 *@grid: This is my double poiterof my previous function.
 *@height: This is my int variable that contains the size of my malloc.
 *Return: free_grid
 */
void free_grid(int **grid, int height)

{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
