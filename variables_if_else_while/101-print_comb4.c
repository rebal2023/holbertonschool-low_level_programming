#include<stdio.h>
/**
 *main - Entry point
 *
 *Return: 0
 */
int main(void)
{
int number1 = 0;
int number2 = 1;
int number3 = 2;

while (number1 < 10)
{
while (number1 != number2 && number2 < 10)
{
while (number2 != number3 && number3 < 10)
{
if (number1 < number2)
{
putchar(number1 + '0');
putchar(number2 + '0');
putchar(number3 + '0');
if (number1 != 7)
{
putchar(',');
putchar(' ');
}
}
number3++;
}
number2++;
number3 = number2 + 1;
}
number1++;
number2 = number1 + 1;
number3 = number2 + 1;
}
putchar('\n');
return (0);
}
