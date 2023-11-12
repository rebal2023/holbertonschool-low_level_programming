#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* free_grid - function that frees a 2D grid
* @grid: 2D grid
* @height: height dimension of grid
* Description: frees memory of grid created by your alloc_grid
*/
void free_grid(int **grid, int height)
{
int i;

for (i = 0; i < height; i++)
free(grid[i]);

free(grid);
}
