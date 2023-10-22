#include <stdio.h>
#include "main.h"
/**
*print_line - draws a straight line
*@n: variable
*/
void print_line(int n)
{
int i = 1;

while (i <= n)
{
if (n > 0)
{
_putchar('_');
}
i++;
}
_putchar('\n');
}
