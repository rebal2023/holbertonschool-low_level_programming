#include "main.h"
#include <stdio.h>
/**
**leet - function show string 1337
*@s: string
*Return: char
*/
char *leet(char *s)
{
int x = 0;
int y = 0;
char a[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L', '\0'};
char b[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1', '\0'};

while (s[x] != '\0')
{
while (a[y] != '\0')
{
if (s[x] == a[y])
{
s[x] = b[y];
}
y++;
}
x++;
}
return (s);
}
