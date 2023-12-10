#include "main.h"
/**
* clear_bit - function that sets the value of a bit to 0 at a given index
* @n: pointer
* @index: index
* Return: -1 0r 1.
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 64)
return (-1);
*n &= ~(1 << index);
return (1);
}
