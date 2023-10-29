#include "main.h"
#include <stdio.h>
/**
*print_rev - prints a string in reverse
*@s: string
*/
void print_rev(char *s)
{
int x = _strlen(s) - 1;
while (x >= 0) {
_putchar(s[x]);
i--;
}
_putchar('\n');
}
