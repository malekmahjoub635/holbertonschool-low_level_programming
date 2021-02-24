#include "holberton.h"
/**
 *factorial - a function that returns the factorial of a given number
 * Return: 0
 *@n: integer
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0)
{
return (1);
}
return (n * factorial(n - 1));
}
