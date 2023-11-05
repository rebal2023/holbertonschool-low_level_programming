#include "main.h"
#include <stdio.h>
/**
**_strncpy - function that copies a string
*@dest: string
*@src: string
*@n: variable
*Return: char
*/
char *_strncpy(char *dest, char *src, int n)
{
int x;

for (x = 0; x < n && src[x] != '\0'; x++)
{
dest[x] = src[x];
}
while (x < n)
{
dest[x] = '\0';
x++;
}
return (dest);
}
