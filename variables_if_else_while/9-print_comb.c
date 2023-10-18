#include<stdio.h>
/**
 *main - Entry point
 *
 *Return: 0
 */
int main(void)
{
int number = 0;

while (number < 10)
{
putchar(number + '0');
putchar(',');
putchar(' ');
number++;
}
 
putchar('\n');

return (0);
}
