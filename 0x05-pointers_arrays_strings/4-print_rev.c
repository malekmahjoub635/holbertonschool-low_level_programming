#include "holberton.h"
/**
 *print_rev - a function that prints a string, in reverse
 *@s: none of ur business 
 *Return: 0
 */
void print_rev(char *s)
{
int i, j;
i = 0;
while (*(s + i) != '\0')
{
i++;
}
for (j = i - 1; j >= 0; j--)
{
_putchar(*(s + j));
}
_putchar('\n');
}
