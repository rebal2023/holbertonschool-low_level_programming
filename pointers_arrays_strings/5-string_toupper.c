#include "main.h"
#include <stdio.h>
/**
*string_toupper - function changes lowercase letters of a string to uppercase
*@s: variable
*Return: char
*/
char *string_toupper(char *s)
{
int x = 0;

while (s[x] != '\0')
{
if (s[x] >= 'a' && s[x] <= 'z')
{
s[x] -= 32;
}
x++;
}
return (s);
}
