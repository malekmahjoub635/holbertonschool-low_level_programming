#include "holberton.h"
/**
 *_strncat -  a function that concatenates two strings
 *@dest:first parameter
 *@src: second parameter
 *@n: third parameter
 *Return: 0
 */
char *_strncat(char *dest, char *src, int n)
{
int i, j;
i = 0;
while (dest[i] != '\0')
{
i++;
}
j = 0;
while (j < n)
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
