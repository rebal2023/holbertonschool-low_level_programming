#include "main.h"
#include <stdio.h>
/**
*print_rev - prints a string in reverse
*@s: string
*/
void print_rev(char *s)
{
int x = 0;

while (s[x] != '\0')
{
x++;
}
while (x >= 1)
{
_putchar(s[x]);
x--;
}
_putchar('\n');
}
