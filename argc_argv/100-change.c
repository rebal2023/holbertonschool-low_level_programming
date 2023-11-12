#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* main - prints min nb of coins to make change for a money amount
* @argc: nb of arguments
* @argv: array of arguments
* Return: 0 or 1
*/
int main(int argc, char *argv[])
{
int num, x, result;
int coins[] = { 25, 10, 5, 2, 1 };

if (argc != 2)
{
printf("Error\n");
return (1);
}
num = atoi(argv[1]);
result = 0;
if (num < 0)
{
printf("0\n");
return (0);
}
for (x = 0; x < 5 && num >= 0; x++)
{
while (num >= coins[x])
{
result++;
num -= coins[x];
}
}
printf("%d\n", result);
return (0);
}
