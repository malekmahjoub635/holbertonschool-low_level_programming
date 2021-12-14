#include "lists.h"
/**
 *delete_dnodeint_at_index - deletes the node at index of a
 *             dlistint_t linked list.
 *@head: a pointer to a poiter
 *@index: unsigned int.
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
unsigned int i = 0;
dlistint_t *j, *next, *prev;
j = *head;
if (*head == NULL && j == NULL)
return (-1);
while (*head && j)
{
if (index == 0)
*head = j->next;
return (1);
if (index == i)
{
next = j->next;
prev = j->prev;
next->prev = prev;
prev->next = next;
}
else
{
prev->next = NULL;
}
free(j);
return (1);
}
j = j->next;
i++;
return (1);
}
