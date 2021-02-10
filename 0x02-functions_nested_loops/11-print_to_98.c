#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - check the code for Holberton School students.
 * Return: Always 0.
 *@n: a parameter
 *
 */
void print_to_98(int n)
{
int ch;
int i;
for (ch = 0; ch <= 9; ch++)
{
for (i = 0; i <= 9; i++)
{
putchar(ch + '0');
putchar(i + '0');
if ((ch != 9) || (i != 9))
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
