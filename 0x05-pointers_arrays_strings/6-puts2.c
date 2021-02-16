#include "holberton.h"
/**
 *puts2 -  a function that prints every other character of a string
 *@str: stfu
 *Return: 0
 */
void puts2(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i = i + 2)
{
_putchar(str[i]);
}
_putchar('\n');
}
