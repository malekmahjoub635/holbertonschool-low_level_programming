#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int print_last_digit(int n);
{
int i;
i = n % 10;
if (i < 0)
_putchar(i + '0');
return (i);
}
