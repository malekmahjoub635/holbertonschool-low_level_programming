#include "holberton.h"
#include <stdlib.h>
/**
 *_realloc - function that reallocates memory block
 *@ptr: pointer to the memory prev allocated with a call to malloc(old_szie)
 *@old_size: is the size in bytes of the alloc space for ptr
 *@new_size: is the new size in bytes of the new memory block
 *Return: char
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *ch;
if (new_size == old_size)
return (ptr);
if (ptr == NULL)
{
ptr = malloc(new_size);
return (ptr);
}
if ((new_size == 0) && ptr != NULL)
{
free(ptr);
return (NULL);
}
if (new_size > old_size)
ch = malloc(new_size);
free(ptr);
return (ch);
}
