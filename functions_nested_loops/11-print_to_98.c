#include <stdio.h>
#include "main.h"
/**
*print_to_98 - prints all natural numbers from n to 98
*@n: variable
*/
void print_to_98(int n)
{
int i;
 
if (n < 99)
{
for (i = n; i < 99; i++)
{
if (i == 98)
{
printf("%d", i);
}
else if (i != 99)
{
printf("%d, ", i);
}
}
printf("\n");
}
else
{
for (i = n; i >= 97; i--)
{
if (i == 98)
{
printf("%i", i);
}
else if (d != 97)
{
printf("%d, ", i);
}
}
printf("\n");
}
}
