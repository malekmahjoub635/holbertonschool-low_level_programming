#include "lists.h"

/**
 *listint_len - returns the number of elements in a linked list
 *@h: head
 *Return: len
 */

size_t listint_len(const listint_t *h)
{
int i;
for (i = 0; h != NULL; i++)
h = h->next;
return (i);
}
