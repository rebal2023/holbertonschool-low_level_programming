#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: 0
 */
int main(void)
{
int n;
int last;

srand(time(0));
n = rand() - RAND_MAX / 2;
last = n % 10;
if (last > 5)
{
/* if condition is true then print the following */
printf("Last digit of %d is %d and is greater than 5\n", n, last);
}
else if (last < 6 && last != 0)
{
/* if condition is false then print the following */
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last);
}
else
{
printf("Last digit of %d is %d and is 0\n", n, last);
}
return (0);
}
