#include "holberton.h"
/**
 *_check - check
 *@n: parameter
*@i: parameter
 *Return: 0
 **/
int _check(int i, int n)
{
if (i * n != n)
i++;
return (i);
}
/**
 *_sqrt_recursion - function that returns the natural square root of a number
 *@n: parameter
 *Return: 0
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
else if (n == 0)
return (0);
else
{
_check(0, n);
return (_sqrt_recursion(n));
}
return (0);
}
