#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* create_array - function that creates an array of chars
* @size: size of the array
* @c: char
* Description: create array and initializes it with char c
* Return: NULL or pointer to array
*/
char *create_array(unsigned int size, char c)
{
unsigned int x;
char *k = (char *)malloc(size * (sizeof(char)));

if (size == 0 || k == NULL)
return (NULL);

for (x = 0; x < size; x++)
*(k + x) = c;

return (k);
}
