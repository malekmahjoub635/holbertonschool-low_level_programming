#include "holberton.h"
/**
 *print_rev - a function that prints a string, in reverse
 *Return: 0
 */
void print_rev(char *s)
{
int n = 0;
while (str[n] != '\0')
{
print_rev(s);
_putchar(str[n]);
}
n++;
_putchar('\n');
}
