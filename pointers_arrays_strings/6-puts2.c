#include "main.h"
#include <stdio.h>
/**
 * puts2 -  prints every other character of a string
 * @str: input
 */
void puts2(char *str)
{
	int i = 0;
_putchar(str[i]);
	while (str[i] != '\0')
	{
	  ++i;
	  ++i;
			_putchar(str[i]);
	}
	_putchar('\n');
}
