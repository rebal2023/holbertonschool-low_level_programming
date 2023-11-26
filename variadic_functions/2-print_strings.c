#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
* print_strings - function that prints strings, followed by a new line.
* @separator: string to be printed between strings.
* @n: number of strings passed to the function.
* @...: variable.
* Description: If separator is NULL nothing is printed, if 1 string is NULL (nil) is printed
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int index;
char *name;
va_start(ap, n);
for (index = 0; index < n; index++)
{
name = va_arg(ap, char*);
if (name != NULL)
printf("%s", name);
else
printf("(nil)");
if (index != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(ap);
}
