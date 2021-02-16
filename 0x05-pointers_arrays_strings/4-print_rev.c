#include "holberton.h"
/**
 *
 *Return: 0
 */
void print_rev(char *s)
{
int n = 0;
while (str[n] != '\0')
{
n--;
_putchar(str[n]);
}
_putchar('\n');
}
