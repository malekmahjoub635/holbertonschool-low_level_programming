#include "lists.h"
#include <stdio.h>
/**
 * print_list - a function that prints all the elements of a list
 * @h: head pointer
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
const list_t *i;
unsigned int j = 0;
i = h;
while (i)
{
if (i->str == NULL)
printf("[%u] %s\n", 0, "(nil)");
else
printf("[%u] %s\n", i->len, i->str);
j++;
i = i->next;
}
return (j);
}
