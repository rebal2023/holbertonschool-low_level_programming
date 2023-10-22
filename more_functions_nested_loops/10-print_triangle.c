#include <stdio.h>
#include "main.h"
/**
*print_triangle - prints a triangle
*@size: variable
*/
void print_triangle(int size)
{
int i;
int j;
int k = 1;

for (i = 0; i < size; i++)
{
for (j = size; j >= 1; j--)
{
if (k >= j)
{
_putchar('#');
}
else
{
_putchar(' ');
}
}
_putchar('\n');
k++;
}
if (size <= 0)
{
_putchar('\n');
}
}
