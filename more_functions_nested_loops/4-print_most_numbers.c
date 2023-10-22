#include <stdio.h>
#include "main.h"
/**
*print_most_numbers - print numbers except 2 amd 4
*/
void print_most_numbers(void)
{
int x = 0;

while (x < 10 && x != 2 && x != 4)
{
_putchar((x) + '0');
x++;
}
_putchar('\n');
}
