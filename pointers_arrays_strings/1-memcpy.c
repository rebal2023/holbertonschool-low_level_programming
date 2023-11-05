#include "main.h"
#include <stdio.h>
/**
* _memcpy - function that copies memory area
* @dest: memory area destination
* @src: memory area source
* @n: number of bytes
* Return: a pointer
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
int x;
int y = 0;

for (x = n; y < x; y++)
{
dest[y] = src[y];
n--;
}
return (dest);
}
