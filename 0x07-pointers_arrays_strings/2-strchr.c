#include "holberton.h"
/**
 *_strchr - a function that locates a character in a string
 *@s: string
 *@c: char
 *Return: 0
 */
char *_strchr(char *s, char c)
{
int i = 0;
while (s[i] != '\0')
{
i++;
if (s[i] == c)
return (s + i);
}
}
return (0);
}
