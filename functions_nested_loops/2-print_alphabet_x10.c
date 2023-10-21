#include "main.h"
/*
 *  * print_alphabet print from a to z  times
 *   */
void print_alphabet(void)
{
for(int i=;i <= 10; i++;)
{
char alphabet = 'a';

while (alphabet <= 'z')
{
_putchar(alphabet);
alphabet++;
}
_putchar('\n');
}
}
