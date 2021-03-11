#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - print name
 * @name: name of the person
 * @f: pointer to function
 */
void print_name(char *name, void (*f)(char *))
{
if (name != 0 && f != 0)
f(name);
}
