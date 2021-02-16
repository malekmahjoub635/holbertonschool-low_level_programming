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
int i;
for (i = 0; i <= n - 1; i++)
{
if (i != n - 1)
{
printf("%d, ", a[i]);
}
else
printf("%d", a[i]);
}
printf("\n");
}
