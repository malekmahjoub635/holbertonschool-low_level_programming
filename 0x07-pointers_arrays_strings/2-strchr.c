#include "holberton.h"
/**
 *_strchr - a function that locates a character in a string
 *@s: string
 *@c: char
 *Return: 0
 */
char *_strchr(char *s, char c)
{
do {
if (*s == c)
{
return (s);
}
} while (*s++);
return (0);
}
