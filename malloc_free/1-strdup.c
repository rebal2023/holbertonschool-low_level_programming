#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* _strdup - function returns pointer to a newly allocated space in memory
* @str: char
* Return: 0
*/
char *_strdup(char *str)
{
int count = 0;
int i;
char *k;

if (str == NULL)
return (NULL);

while (*(str + count))
count++;

k = (char *)malloc((count + 1) * (sizeof(char)));

if (k == NULL)
return (NULL);

for (i = 0; i <= count; i++)
{
k[i] = str[i];
}
return (k);
}
