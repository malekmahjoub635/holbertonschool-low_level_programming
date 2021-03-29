B#include "holberton.h"

/**
 * flip_bits - flips one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int i, j = 0;
unsigned long int c;
unsigned long int o = 0;
o = n & m;
for (j = 63; j >= 0; j--)
{
c = o >> j;
if (c & 1)
i++;
}
return (i);
}
