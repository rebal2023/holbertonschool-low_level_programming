#include "main.h"
#include <stdio.h>
/**
*_strcmp - function that compares two strings
*@s1: string
*@s2: string
*Return: int
*/
int _strcmp(char *s1, char *s2)
{
int x = 0;
int y = 0;

while (s1[x] == s2[x] && s1[x] != '\0')
{
x++;
}
if (s1[x] < s2[x])
{
y = -13;
}
else if (s1[x] > s2[x])
{
y = 13;
}
else
{
y = 0;
}
return (y);
}
