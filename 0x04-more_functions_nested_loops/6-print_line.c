#include "holberton.h"
/**
 *print_line - a function that draws a straight line in the terminal
 *@n: a parameter
 *Return: 0
 */
void print_line (int n)
{
_putchar('\n');
_putchar('-');
_putchar('-');
_putchar('\n');
while (n < 10)
{
_putchar('-');
 n++;
}
_putchar('\n');
}
