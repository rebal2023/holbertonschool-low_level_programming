#include <stdio.h>
#include "main.h"
/**
* print_array - prints n elements of an array of integers
* @a: array
* @n: number of elements of the array to be printed
*/

void print_array(int *a, int n)
{
int i;
for (i = 0; i <=(n - 1); i++)
{
if (i == (n - 1))
{
printf("%d", a[n - 1]);
}
else
{ 
printf("%d, ", a[i]);
}
printf("\n");
}
