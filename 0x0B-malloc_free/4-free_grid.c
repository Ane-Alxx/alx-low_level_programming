#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* free_grid - function for free_grid
*
* @grid: grid
*
* @height: column
*
* Return: (Success)
*
*/

void free_grid(int **grid, int height)
{
	int index = 0;

	while (index < height)
	{
		free(grid[index]);
		index++;
	}
	free(grid);
}
