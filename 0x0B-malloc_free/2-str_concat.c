#include "holberton.h"
#include <stdlib.h>
/**
 *str_concat - function
 *@s1: first string
 *@s2: second string
 * Return: 0
 */
char *str_concat(char *s1, char *s2)
{
char *c;
unsigned int j, i, k, l;
i = 0;
while (s1[i])
i++;
j = 0;
while (s2[j])
j++;
c = malloc(i + j + 1);
if (s1 == NULL || s2 == NULL || c == NULL)
return (NULL);
for (k = 0; k < i; k++)
c[k] = s1[k];
for (l = 0; k < i + j; k++)
{
c[k] = s2[l];
l++;
}
return (c);
}
