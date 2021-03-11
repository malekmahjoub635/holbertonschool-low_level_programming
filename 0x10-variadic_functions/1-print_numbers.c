#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_numbers - a function that prints numbers
 * @n: The number of integers
 * @separator: is the string to be printed between numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list j;
va_start(j, n);
for (i = 0; i < n; i++)
{
printf("%d", va_arg(j, int));
if (((i < (n - 1)) && separator != NULL))
printf("%s", separator);
}
printf("\n");
va_end(j);
}
