#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 * @h: head
 * Return: length
 */
size_t dlistint_len(const dlistint_t *h);
{
int i;

if (h == NULL)
return (0);
for (i = 0; h != NULL; i++)
h = h->next;
return (i);
}
