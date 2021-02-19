#include "holberton.h"
/**
 *cap_string - a function that capitalizes all words of a string
 *@s: a string
 *Return: 0
 */
char *cap_string(char *s)
{
int i, j;
char n[] = {',', '\t', '\n', ' ', ';', '.',
	     '!', '?', '"', '(', ')', '{', '}'};
for (i = 0; s[i] != '\0'; i++)
if (s[i] >= 'a' && s[i] <= 'z')
{
s[i] = s[i] - 32;
}
for (j = 0; n[j] <= 12; j++)
{
if (s[i] == n[j])
s[i + 1] -= 32;
}
return (s);
}
