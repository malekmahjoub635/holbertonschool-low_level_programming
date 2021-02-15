#include "holberton.h"
/**
 *swap_int -  a function that swaps the values of two integers
 *@a: first parameter
 *@b: second parameter 
 *Return: 0
 */
void swap_int(int *a, int *b)
{
int i;
i = *a;
*a = *b;
*b = i;
}
