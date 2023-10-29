#include "main.h"
#include <stdio.h>
/**
*swap_int - swap two values
*@a: integer
*@b: integer
*/
void swap_int(int *a, int *b)
{
int *x;
*x = *a;
*a = *b;
*b = *a;
}
