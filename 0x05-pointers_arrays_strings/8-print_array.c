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
int n [5] = {98, 402, -198, 298, -1024};
int a;
for(a = 0; a < 5; a++)
{
putchar(',');
putchar(' ');
printf("%d ", n[a]);
}
}
