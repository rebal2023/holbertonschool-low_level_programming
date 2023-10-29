#include "main.h"
#include <stdio.h>
/**
*_atoi - convert a string to an integer
*@s: string
*Return: integer
*/
int _atoi(char *s)
{
int len, i, d, digit, nb, f;
len = 0;
i = 0;
d = 0;
digit = 0;
nb = 0;
f = 0;
digit = 0;
while (s[len] != '\0')
len++;
while (i < len)
{
if (s[i] == '-')
++d;
if (s[i] >= '0' && s[i] <= '9')
{
digit = s[i] - '0';
if (d % 2)
digit = -digit;
nb = nb * 10 + digit;
f = 1;
if (s[i + 1] < '0' || s[i + 1] > '9')
break;
f = 0;
}
i++;
}
if (f == 0)
return (0);
return (nb);
}
