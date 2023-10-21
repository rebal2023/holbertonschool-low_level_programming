#include "main.h"
#include <stdio.h>
/**
 * *_islower - checks for lowercase character
 * *
 * *Return: 0
 * */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
_putchar('1');
return (0);
}
else
{
_putchar('0');
return(0);
}
}

