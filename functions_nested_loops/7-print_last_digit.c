#include "main.h"
#include <stdio.h>
/**
*print_last_digit - prints the last digit of a number
*@c: variable
*Return: last digit
*/
int print_last_digit(int c)
{
int last;
last = c % 10;
if (c < 0)
{
last=last * -1;
_putchar(last + '0');
return (last);
}
else
{_putchar(last + '0');
return (last);
}
}
