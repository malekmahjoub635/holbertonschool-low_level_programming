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
dlistint_t *auxH;
unsigned int j;
if (head == NULL || *head == NULL)
return (-1);
auxH = *head;
if (index == 0)
{
*head = auxH->next;
if (auxH->next != NULL)
{
auxH->next->prev = NULL;
}
free(auxH);
return (1);
}
for (j = 0; j < index; j++)
{
if (auxH->next == NULL)
return (-1);
auxH = auxH->next;
}
auxH->prev->next = auxH->next;
if (auxH->next != NULL)
auxH->next->prev = auxH->prev;
free(auxH);
return (1);
}
