#include "holberton.h"
/**
 *rev_string -  a function that reverses a string
 *
 *Return: 0
 */
void rev_string(char *s)
{
int i;
 i = 0;
for (i = 0; s [i] !='\0'; i = i+2)
{
_putchar(s [i]);
}
_putchar('\n');
}
