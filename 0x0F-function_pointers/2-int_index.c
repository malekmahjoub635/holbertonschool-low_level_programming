#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array to search in
 * @size: the number of elements in the array
 * @cmp: a pointer to the function to be used to compare values
 * Return: 0 if false, something else otherwise
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array != 0 && cmp != 0)
{
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
return (i);
}
}
return (-1);
}
