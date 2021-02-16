#include "holberton.h"
#include <stdio.h>
/**
 *puts2 -  a function that prints every other character of a string
 *@str: parameter pointer
 *Return: 0
 */
void puts2(char *str)
{
int i, y;
for (i = 0; str[i] != '\0'; i++)
{
}
i = i - 1;
for (y = 0; y <= i ; y = y + 2)
_putchar(str[y]);
_putchar('\n');
}
