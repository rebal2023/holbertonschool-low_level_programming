#include<stdio.h>
/**
*main - main function
*
*Return: 1
*/
int main(void)
{
char *word = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
while (*word)
putchar (*word++);
return (1);
}
