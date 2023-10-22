#include <stdio.h>
#include "main.h"
/**
*print_to_98 - prints all natural numbers from n to 98
*@n: variable
*/
void print_to_98(int n)
{
int i;

if (n == 98)
{
printf("%d", n)
}
 
 else if (n < 98)
    {
      for (i = n; i < 99; i++)
	{
	      printf("%d, ", i);
	}
      printf("\n");
    }
 else if
    {
      for (i = n; i > 97; i--)
	{
	      printf("%i, ", i);
	}
      printf("\n");
    }
}
