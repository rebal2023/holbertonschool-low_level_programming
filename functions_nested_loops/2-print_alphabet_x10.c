#include "main.h"
/*
 *  * print_alphabet print from a to z  times
 *   */
void print_alphabet_x10(void)
{
int i;
for(i=0;i < 10; i++)
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
