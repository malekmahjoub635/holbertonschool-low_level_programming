#include "holberton.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointing to a string
 * Return: the converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
unsigned int conv = 0;
int i;
if (b == NULL)
return (0);
for (i = 0; b[i] != '\0'; i++)
{
if (b[i] < '0' || b[i] > '1')
return (0);
conv = 2 * conv + (b[i] - '0');
}
return (conv);
}
