#include "holberton.h"
/**
 * _isdigit - a function that checks for a digit
 *@c: a parameter
 * Return: 0
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}
