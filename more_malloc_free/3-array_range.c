#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* array_range - function that creates an array of integers
*@min: integer
*@max: integer
*Return: pointer or NULL.
*/
int *array_range(int min, int max)
{
int x, y, *p;
int size;

if (min > max)
return (NULL);

size = max - min + 1;

p = malloc(size * sizeof(*p));

if (p == NULL)
return (NULL);

for (x = min, y = 0; x <= max; x++)
{
p[y] = x;
y++;
}
return (p);
}
