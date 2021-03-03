#include "holberton.h"
#include <stdlib.h>
/**
 *_strdup - function
 *@str: a string
 * Return: 0
 */
char *_strdup(char *str)
{
char *n;
unsigned int x = 0, y = 0;
if (str == NULL)
return (NULL);
while (str[x] != '\0')
x++;
n = malloc((x + 1) * sizeof(char));
if (n == NULL)
return (NULL);
while ((n[y] = str[y]) != '\0')
y++;
return (n);
}
