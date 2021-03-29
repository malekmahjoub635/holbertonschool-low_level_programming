#include "holberton.h"

/**
 * clear_bit - sets the value of a bit to 0
 * @n: pointer
 * @index: index of the bit
 * Return: 1 for success, -1 if fails
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int i = 1;
unsigned long int sum = 0;
if (index > 63)
return (-1);
sum = ~(i << index);
*n = sum & *n;
return (1);
}
