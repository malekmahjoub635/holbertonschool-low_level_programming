#include "holberton.h"
/**
 * more_numbers -  a function that prints 10 times the numbers
 * Return: 0
 */
void more_numbers(void)
{
int i;
int m;
for (i = 0; i < 10; i++)
{
for (m = 0; m <= 14; m++)
{
if (m >= 10)
_putchar(m / 10 + '0');
_putchar(m % 10 + '0');
}
_putchar('\n');
}
}
