#include<stdio.h>
/**
 *main - Entry point
 *
 *Return: 0
 */
int main(void)
{
int number = 0;
char letter = 'a';
while (number < 10)
{
putchar(number + '0');
number++;
}
while (letter <= 'f')
{
putchar(letter);
letter++;
}

putchar('\n');

return (0);
}
