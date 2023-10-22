#include <stdio.h>
#include "main.h"
/**
*print_diagonal - draws a diagonal line
*@n: variable
*/
void print_diagonal(int n)
{
int x;
int y;

for (x = 1; x <= n; x++)
{
for (y = 1; y < x; y++)
{
if (x != 1)
{
_putchar(' ');
}
}
_putchar('\\');
_putchar('\n');
}
if (n <= 0)
{
_putchar('\n');
}
}
