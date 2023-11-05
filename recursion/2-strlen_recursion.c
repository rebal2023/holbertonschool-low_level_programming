#include "main.h"
#include <stdio.h>
/**
* _strlen_recursion - function that returns the length of a string
* @s: variable
* Return: length
*/
int _strlen_recursion(char *s)
{
int x = 0;

if (*s)
{
x++;
x += _strlen_recursion(s + 1);
}
return (x);
}
