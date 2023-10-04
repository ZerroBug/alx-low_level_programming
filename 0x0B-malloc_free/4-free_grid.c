#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - Function frees 2 dimentional grid
 * @grid: 2d grid
 * @height: height  of grid
 * Description: frees memory of grid
 * Return: nothing
 *
 */
void free_grid(int **grid, int height)
{
	int counter;

	for (counter = 0; counter < height; counter++)
	{
		free(grid[counter]);
	}
	free(grid);
}
