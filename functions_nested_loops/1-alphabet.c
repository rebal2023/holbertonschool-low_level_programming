#include "main.h"
/**
* print_alphabet print from a to z
*/
void print_alphabet(void)
{
char alphabet = 'a';

while (alphabet <= 'z')
{
_putchar(alphabet);
alphabet++;
}
_putchar('\n');
}
