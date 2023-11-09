#include "main.h"
#include <stdio.h>

int p(char *s, int x, int len);
int len(char *s);

/**
* is_palindrome - function that returns 1 if a string is a palindrome and 0 if not
* @s: string
* Return: 0 or 1
*/
int is_palindrome(char *s)
{
if (*s == 0)
return (1);
return (p(s, 0, len(s)));
}
/**
* len - string length
* @s: string
* Return: len
*/
int len(char *s)
{
if (*s == '\0')
return (0);
return (1 + len(s + 1));
}
/**
* p - function for palindrome
* @s: string
* @x: integer
* @len: string len
* Return: 0 or 1
*/
int p(char *s, int x, int len)
{
if (*(s + x) != *(s + len - 1))
return (0);
if (i >= len)
return (1);
return (p(s, x + 1, len - 1));
}
