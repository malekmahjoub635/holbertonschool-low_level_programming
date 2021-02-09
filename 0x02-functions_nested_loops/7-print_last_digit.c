#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *@n: is for parameter
 * Return: Always 0.
 */
int print_last_digit(int n);
{
int n, i;
i = n % 10;
if (i < 0)
i = i * -1; 
_putchar(i + '0');
return (i);
}
