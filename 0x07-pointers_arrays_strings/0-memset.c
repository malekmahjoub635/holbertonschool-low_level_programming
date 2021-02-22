#include "holberton.h"
/**
 *_memset -  a function that fills memory with a constant byte
 *@s: our memory area
 *@b: our array
 *@n: num of times
 *Return: 0
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
