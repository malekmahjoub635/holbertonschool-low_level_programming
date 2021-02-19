#include "holberton.h"
/**
 *reverse_array -  a function that reverses the content of an array of integers
 *@a: first parameter
 *@n: second parameter
 * Return: 0
 */
void reverse_array(int *a, int n)
{
int i, tmp, j;
i = 0;
j = n - 1;
while (i != n / 2)
{
tmp = a[i];
a[i] = a[j];
a[j--] = tmp;
i++;
}
}
