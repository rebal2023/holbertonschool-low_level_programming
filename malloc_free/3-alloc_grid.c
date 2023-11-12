#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* alloc_grid -  function returns pointer to 2D array of integers
* @width: width value
* @height: height value
* Return: pointer to 2D array
*/
int **alloc_grid(int width, int height)
{
int i, j;
int **k;

if (width <= 0 || height <= 0)
return (NULL);

k = (int **)malloc(height * sizeof(int *));

if (k == NULL)
return (NULL);
for (i = 0; i < height; i++)
{
k[i] = (int *)malloc(width * sizeof(int));

if (k[i] == NULL)
{
for (; i >= 0; i--)
free(k[i]);
free(k);
return (NULL);
}
}
for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
k[i][j] = 0;
}
return (k);
}
