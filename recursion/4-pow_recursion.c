#include "main.h"
#include <stdio.h>
/**
* _pow_recursion - function returns value of x raised to the power of y
* @x: integer
* @y: integer
* Return: value
*/
int _pow_recursion(int x, int y)
{
if (y == 1)
return (x * y);
else if (y == 0)
return (1);
else if (y < 0)
return (-1);
return (x * _pow_recursion(x, y - 1));
}
