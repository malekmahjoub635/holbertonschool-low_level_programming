#include "holberton.h"

/**
 *print_last_digit  - function that prints the last digit of a number.
 *@n: is a parameter
 * Return: Always 0.
 */
int print_last_digit(int n)
{
int i;
i = n % 10;
if (i < 0)
i = i * -1;
_putchar (i + '0');
return (i);
}
