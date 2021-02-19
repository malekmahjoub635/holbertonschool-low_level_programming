#include "holberton.h"
/**
 *_strcmp - a function that compares two strings
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
int i, p;
i = 0;
while (s1[i] != '\0' && s1[i] != '\0')
{
if (s1[i] == s2[i])
p = 0;
else
{
p =  (s1[i] - s2[i]);
s1[i + 1] = '\0';
}
i++;
}
return (p);
}
