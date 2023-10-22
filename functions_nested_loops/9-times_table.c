#include <stdio.h>
#include "main.h"
/**
 * times_table - function that prints the 9 times table
 */
void times_table(void)
{
  int x;
  int y;

  for (x = 0; x <= 9; x++)
    {
      for (y = 0; y <= 9; y++)
	{
	  int xy = x * y;


	    
	      _putchar(',');
	      _putchar(' ');
	      _putchar((xy / 10) + '0');
	      _putchar((xy % 10) + '0');
	    
	}
    }
  _putchar('\n');
}
