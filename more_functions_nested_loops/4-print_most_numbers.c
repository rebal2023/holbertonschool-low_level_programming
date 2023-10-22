#include <stdio.h>
#include "main.h"
/**
*print_most_numbers - print numbers except 2 amd 4
*/
void print_most_numbers(void)
{
int x;

for (x = 0; x < 10; x++)
{
if (x != 2 && x != 4)
{
_putchar((x) + '0');
}
}
_putchar('\n');
}
