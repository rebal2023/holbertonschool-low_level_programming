#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* string_nconcat - function that concatenates two strings
* @s1: string 1
* @s2: string 2
* @n: nb of bytes of s2 to concatenate to s1.
* Return: concatenation or NULL.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i, j;
unsigned int count1 = 0, count2 = 0;
char *k;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

while (s1[count1])
count1++;

while (s2[count2])
count2++;

k = malloc((count1 + n) * sizeof(*k) + 1);

if (k == NULL)
return (NULL);
for (i = 0; i < count1; i++)
k[i] = s1[i];
if (n >= count2)
{
for (i = count1, j = 0; j <= count2; i++, j++)
k[i] = s2[j];
}
if (n < count2)
{
for (i = count1, j = 0; j < n; i++, j++)
k[i] = s2[j];
k[n + count] = '\0';
}
return (k);
}
