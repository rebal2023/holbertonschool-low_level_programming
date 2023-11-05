#include "main.h"
#include <stdio.h>
/**
* prime - check if int is prime using recursive
* @x: integer
* @y: iterator
* Return: 0 or 1
*/
int prime(int x, int y)
{
if (y == 1)
return (1);
if (x % y == 0 && y > 0)
return (0);
return (prime(x, y - 1));
}
/**
* is_prime_number - check if int is a prime number
* @x: integer
* Return: 0 or 1
*/
int is_prime_number(int x)
{
if (x <= 1)
return (0);
return (prime(x, x - 1));
}
