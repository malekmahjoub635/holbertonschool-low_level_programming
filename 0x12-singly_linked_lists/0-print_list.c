B#include "lists.h"
/**
 *print_list - a function that prints all the elements of a list
 *@h: head
 *Return: number of nodes
 */
size_t print_list(const list_t *h)
{
int i;
if (h == NULL)
return (0);
for (i = 0; h != NULL; i++)
{
if (h->str != NULL)
printf("[%d] %s\n", h->len, h->str);
else
printf("[0] (nil)\n");
h = h->next;
}
return (i);
}
