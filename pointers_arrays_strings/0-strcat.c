#include "main.h"
#include <stdio.h>
/**
**_strcat - function that concat 2 strings
*@dest: string
*@src: string
*Return: char
*/
char *_strcat(char *dest, char *src)
{
int x = 0;
int y = 0;

while (dest[x] != '\0')
{
x++;
}
while (src[y] != '\0')
{
dest[x + y] = src[y];
y++;
}
dest[x + y] = '\0';
return (dest);
}
