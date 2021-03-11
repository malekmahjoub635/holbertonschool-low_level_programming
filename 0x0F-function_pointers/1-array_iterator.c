#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - parameter on each element of an array
 * @array: The array
 * @size: Size of array
 * @action: Pointer to function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i = 0;
if (array != NULL && action != NULL)
{
for (; i < size; i++)
action(array[i]);
}
}
