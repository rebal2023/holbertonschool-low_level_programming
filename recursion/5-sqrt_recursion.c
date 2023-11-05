#include "main.h"
#include <stdio.h>
/**
*_sqrt - function
*@n: integer
*@i: integer
*Return: integer
*/
int _sqrt(int x, int y)
{
if (x == 0)
{
return (1);
}
else if (x < 0)
{
return (-1);
}
else if (y * y == x)
{
return (y);
}
else
{
return (_sqrt(x, y + 1));
}
}
/**
*_sqrt_recursion - function that returns the natural square root of a nb
*@n: integer
*Return: integer
*/
int _sqrt_recursion(int n)
{
return (_sqrt(x, 1));
}
