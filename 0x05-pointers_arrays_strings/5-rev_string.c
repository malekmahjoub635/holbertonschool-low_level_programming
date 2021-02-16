#include "holberton.h"
/**
 *rev_string -  a function that reverses a string
 *Return: 0
 */
void rev_string(char *s)
{
int i;
for (i = 0; s [i] !='\0'; i++)
{
_putchar(s [i]);
}
_putchar('\n');
}
