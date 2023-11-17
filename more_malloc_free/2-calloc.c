#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* _calloc - function that allocates memory for an array
* @nmemb: integer
* @size: integer
* Return: pointer or NULL.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *p;
char *k;
unsigned int i;

if (nmemb == 0 || size == 0)
return (NULL);

k = malloc(nmemb * size);

if (p == NULL)
return (NULL);

k = p;

for (i = 0; i < (size * nmemb); i++)
k[i] = '\0';

return (p);
}
