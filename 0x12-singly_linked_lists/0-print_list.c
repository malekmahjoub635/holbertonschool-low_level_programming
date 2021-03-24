B#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *print_list - a function that prints all the elements of a list
 *@h: head
 *Return: number of nodes
 */
size_t print_list(const list_t *h)
{
size_t i = 0;
while (h != NULL)
{
if (h->str == NULL)
printf("[0] (nil)\n");
else
printf("[%d] %s\n", h->i, h->str);
h = h->next;
i++;
}
return (i);
}
