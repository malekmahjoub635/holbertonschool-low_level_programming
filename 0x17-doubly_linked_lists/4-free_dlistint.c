#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - frees a linked list
 * @head: pointer
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *n;
while (head)
{
n = head;
head = head->next;
free(n);
}
}
