#include "holberton.h"
/**
 *int _isupper(int c); - a function that checks for uppercase character.
 *Return: 0
 */
int _isupper(int c);
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
