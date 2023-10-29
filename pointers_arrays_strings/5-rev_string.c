#include "main.h"
#include <stdio.h>
/**
*rev_string - prints a string in reverse
*@s: string
*/
void rev_string(char *s)
{
int x = 0;

while (s[x] != '\0')
{
_putchar(s[x]);
x++;
}
while (x >= 1)
{
_putchar(s[x]);
x--;
}
}
