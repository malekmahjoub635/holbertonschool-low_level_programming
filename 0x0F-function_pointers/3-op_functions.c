#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - sums integers
 * @a: num1
 * @b: num2
 * Return: integer.
 */
int op_add(int a, int b)
{
return (a + b);
}
/**
 * op_sub - substracts integers
 * @a: integer
 * @b: integer
 * Return: result
 */
int op_sub(int a, int b)
{
return (a - b);
}
/**
 * op_mul - multiplies integers
 * @a: num1
 * @b: num2
 * Return: result
 */
int op_mul(int a, int b)
{
return (a * b);
}
/**
 * op_div - divises integers
 * @a: 1st num
 * @b: 2nd num
 * Return: result
 */
int op_div(int a, int b)
{
return (a / b);
}
/**
 * op_mod - rest of integers
 * @a: first integer
 * @b: second integer
 * Return: result
 */
int op_mod(int a, int b)
{
return (a % b);
}
