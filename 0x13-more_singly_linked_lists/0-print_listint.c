#include "lists.h"
#include <stdio.h>
/**
 *print_listint - print all the elements of a list
 *@h: head
 *Return: number of nodes
 */

size_t print_listint(const listint_t *h)

{
int i;
for (i = 0; h != NULL; i++)
{
printf("%d\n", h->n);
h = h->next;
}
return (i);
}
