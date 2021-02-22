#include "holberton.h"
/**
 *_memcpy - a function that copies memory area
 *@dest: memory area
 *@src: another memory area
 *@n: num of times
 *Return: 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int j;
for (j = 0; j < n && src[j] != '\0'; j++)
{
dest[j] = src[j];
}
while (j < n)
{
dest[j] = '\0';
j++;
}
return (dest);
}
