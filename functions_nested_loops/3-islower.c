#include "main.h"
#include <stdio.h>
/**
*_islower - checks for lowercase character
* @c: The character to be checked
*Return: 1 or 0
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
