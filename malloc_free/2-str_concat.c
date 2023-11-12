#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* str_concat - function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: concatenation of s1 & s2
 */
char *str_concat(char *s1, char *s2)
{
int count = 0, count1 = 0;
int i, j;
char *k;

if (s1 == NULL)

s1 = "";

if (s2 == NULL)

s2 = "";

while (*(s1 + count))
count++;

while (*(s2 + count1))
count1++;

k = (char *)malloc(((count + count1) + 1) * (sizeof(char)));

if (k == NULL)
return (NULL);

for (i = 0; i < count; i++)
{
k[i] = s1[i];
}
for (i = count, j = 0; i <= (count + count1); i++, j++)
{
k[i] = s2[j];
}
return (k);
}
