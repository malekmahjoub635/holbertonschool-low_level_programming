#include "holberton.h"
/**
 *_isupper - a function that checks for uppercase character.
 *Return: 0 or 1
 *@c: a parameter
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
