#include "holberton.h"

/**
 * set_bit - sets the value of a bit to 1
 * @n: pointer to number
 * @index: index
 *
 * Return: 1 for success, -1 if an error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int i = 1;
unsigned long int sum = 0;
if (index > 63)
return (-1);
sum = i << index;
*n = sum | *n;
return (1);
}
