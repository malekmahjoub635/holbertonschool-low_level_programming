#include "lists.h"
#include <stdio.h>
/**
 *print_listint - print all the elements of a list
 *@h: head
 *Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
size_t j = 0;
while (h)
{
printf("%d\n", h->n);
j++;
h = h->next;
}
return (j);
}
