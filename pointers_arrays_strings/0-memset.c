#include "main.h"
#include <stdio.h>
/**
* _memset - function that fills memory with a constant byte
* @s: address
* @b: constant byte
* @n: number of bytes
* Return: changed array with new value for n bytes
*/
char *_memset(char *s, char b, unsigned int n)
{
	int x;

	for (x = 0; n > 0; x++)
	{
		s[x] = b;
		n--;
	}
	return (s);
}
