#include "main.h"
#include <stdio.h>
/**
*reverse_array - function that reverses the content of an array of integers
*@a: array
*@n: nb of element of the array
*/
void reverse_array(int *a, int n)
{
int len;
int x = 0;
int y = 0;

for (len = 0; len < n / 2; len++)
{
y = (n - len) - 1;
x = a[len];
a[len] = a[y];
a[y] = x;
}
while (len < n)
{
len++;
}
}
