#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_strings - Print all numbers of the func
 * @n: The number of arguments
 * @separator: separator
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list j;
char *s;
va_start(j, n);
for (i = 0; i < n; i++)
{
s = va_arg(j, char*);
if (s != NULL)
printf("%s", s);
else
printf("(nil)");
if (((i < (n - 1)) && separator != NULL))
printf("%s", separator);
}
printf("\n");
va_end(j);
}
