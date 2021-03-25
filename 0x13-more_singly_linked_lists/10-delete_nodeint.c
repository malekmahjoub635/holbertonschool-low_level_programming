#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - deletes a node at index of a linked list
 * @head: first node
 * @index: index of the node
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *i = *head;
listint_t *j = NULL;
unsigned int l = 0;
if (*head == NULL)
return (-1);
if (index == 0)
{
*head = (*head)->next;
free(i);
return (1);
}
while (l < index - 1)
{
if (!i || !(i->next))
return (-1);
i = i->next;
l++;
}
j = i->next;
i->next = j->next;
free(j);
return (1);
}
