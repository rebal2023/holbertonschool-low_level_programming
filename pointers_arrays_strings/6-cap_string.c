#include "main.h"
#include <stdio.h>
/**
**cap_string - function that capitalizes all words of a string
*@s: string
*Return: char
*/
char *cap_string(char *s)
{
int x = 0;
int y;
char a[] = " \t\n,;.!?\"(){}";

if (s[0] >= 97 && s[0] <= 122)
{
s[0] -= 32;
}
while (s[x] != '\0')
{
if (s[x + 1] >= 97 && s[x + 1] <= 122)
{
for (y = 0; a[y] != '\0'; y++)
{
if (a[y] == s[x])
{
s[x + 1] -= 32;
break;
}
}
}
x++;
}
return (s);
}
