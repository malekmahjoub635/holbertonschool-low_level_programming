#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 * @h: head
 * Return: length
 */
size_t dlistint_len(const dlistint_t *h);
{
int j;
for (j = 0; h != NULL; j++)
h = h->next;
return (j);
}
