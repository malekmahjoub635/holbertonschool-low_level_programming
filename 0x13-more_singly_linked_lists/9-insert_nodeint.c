#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: head
 * @idx: index of the new node
 * @n: element to insert on the new node
 * Return: pointer to node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i;
listint_t *j;
listint_t *tmp = *head;
j = malloc(sizeof(listint_t));
if (!j || !head)
return (NULL);
j->n = n;
j->next = NULL;
if (idx == 0)
{
j->next = *head;
*head = j;
return (j);
}
for (i = 0; tmp && i < idx; i++)
{
if (i == idx - 1)
{
j->next = tmp->next;
tmp->next = j;
return (j);
}
else
j = j->next;
}
return (NULL);
}
