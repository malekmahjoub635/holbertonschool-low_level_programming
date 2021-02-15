#include "holberton.h"
/**
 *_puts - a function that returns the length of a string
 *@str: nvm
 *Return: 0
 */
void _puts(char *str)
{
int n = 0;
while (str[n] != '\0')
{
_putchar(str[n]);
n++;
}
_putchar('\n');
}
