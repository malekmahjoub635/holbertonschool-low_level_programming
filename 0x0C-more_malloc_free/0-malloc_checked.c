#include "holberton.h"
#include <stdlib.h>
/**
 * malloc_checked - Allocates memory
 * @b: unsigned integer
 * Return: A pointer
 */
void *malloc_checked(unsigned int b)
{
void *i;
i = malloc(b);
if (i == NULL)
exit(98);
return (i);
}
