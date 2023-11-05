#include "main.h"
#include <stdio.h>
/**
**_strncat - function that concat 2 strings
*@dest: string
*@src: string
*@n: variable
*Return: char
*/
char *_strncat(char *dest, char *src, int n)
{
int x = 0;
int y = 0;

while (dest[x] != '\0')
{
x++;
}
while (src[y] != '\0')
{
if (y < n)
{
dest[x + y] = src[y];
}
y++;
}
dest[x + y] = '\0';
return (dest);
}
