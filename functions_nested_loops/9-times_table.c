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


	  if (y == 0)
	    {
	      _putchar((xy) + '0');
	      _putchar(',');
	    }
	  else if (xy <= 9)
	    {
	      _putchar(' ');
	      _putchar(' ');
	      _putchar((xy) + '0');
	      _putchar(',');
	    }
	  else if (xy > 9)
	    {
	      _putchar(' ');
	      _putchar((xy / 10) + '0');
	      _putchar((xy / 10) + '0');
	      _putchar(',');
	    }
	}
      _putchar('\n');
    }
  _putchar('\n');
}
