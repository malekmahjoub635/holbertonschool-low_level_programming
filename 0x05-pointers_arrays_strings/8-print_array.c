#include "holberton.h"
#include <stdio.h>
/**
 *print_array - a function that prints n elements of an array of integers
 *@a: first parameter
 *@n: second parameter
 *Return: 0
 */
void print_array(int *a, int n)
{
int p;
for (p = 0; p <= n - 1; p++)
{
if (p != n - 1)
{
printf("%d, ", a[p]);
}
else
printf("%d", a[p]);
}
printf("\n");
}
