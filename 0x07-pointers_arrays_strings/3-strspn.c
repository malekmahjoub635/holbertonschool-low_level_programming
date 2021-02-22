#include "holberton.h"
/**
 *_strspn - a function that gets the length of a prefix substring
 *@s: nvm
 *@accept: nvm 2
 * Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j;
for (i = 0; s[i]; i++)
{
for (j = 0; accept[j]; j++)
{
if (accept[j] == s[i])
break;
}
if (!accept[j])
break;
}
return (i);
}
