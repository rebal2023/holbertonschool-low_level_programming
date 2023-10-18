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
if (number != 9)
{
putchar(number + '0');
putchar(',');
putchar(' ');
number++;
}
else
{
putchar(number + '0');
number++;
}
}

putchar('\n');

return (0);
}
