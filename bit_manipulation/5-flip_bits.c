#include "main.h"
/**
* flip_bits - returns number of bits needed to flip
* @n: integer
* @m: destination
* Return: number of bits
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int xor, bits = 0;
for (xor = n ^ m; xor > 0; xor >>= 1)
{
bits += (xor & 1);	       
}
return (bits);
}
