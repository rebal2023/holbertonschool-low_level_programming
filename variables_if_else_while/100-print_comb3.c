#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: 0
 */
int main(void)
{
int number1 = 0;
int number2 = 1;

while ( number1 <10)
{
while (number1 != number2 && number2 < 10)
{
if (number1 < number2)
{
putchar(number1 + '0');
putchar(number2 + '0');
putchar(',');
putchar(' ');
}
number2++;
}
number1++;
number2 = number1 + 1;
}
putchar('\n');
return (0);
}
