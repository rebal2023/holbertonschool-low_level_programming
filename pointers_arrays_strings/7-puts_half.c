#include "main.h"
#include <stdio.h>
/**
* puts_half - prints half of a string
* @str: string
*/

void puts_half(char *str)
{
	int i, len;

	len = 0;

	for (i = 0; str[i] != '\0'; i++)
	  {
		len++;
	  }
	for (i = (len/2); str[i] != '\0'; i++)
	  {
	    _putchar(str[i]);
	  }
	_putchar('\n');
}
