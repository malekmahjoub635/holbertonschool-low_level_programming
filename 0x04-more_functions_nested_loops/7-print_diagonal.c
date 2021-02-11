#include "holberton.h"
/**
 * print_diagonal -  a function that draws a diagonal line on the terminal.
 *@n: a parameter
 * Return: 0
 */
void print_diagonal(int n)
{
int i, j;
if (n <= 0)
_putchar('\n');
else
{
for (i = 1; i <= n; i++)
{
for (j = 1; j <= i; j++)
{
if (j != i)
_putchar(' ');
else
{
_putchar('\\');
_putchar('\n');
}
}
}
}
}
