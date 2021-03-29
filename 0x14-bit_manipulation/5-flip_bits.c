#include "holberton.h"

/**
 * flip_bits - flips one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int j = 0;
unsigned long int sum;
sum = n ^ m;
for (; sum >= 1;)
{
if ((sum & 1) == 1)
j++;
sum >>= 1;
}
return (j);
}
