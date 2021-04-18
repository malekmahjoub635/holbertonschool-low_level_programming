#include "lists.h"
/**
 *reverse_listint - reverses a linked list
 *@head: first node of the list
 *Return: reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *h, *t;
if (*head == NULL)
return (NULL);
if ((*head)->next == NULL)
return (*head);
t = NULL;
while (*head != NULL)
{
h = (*head)->next;
(*head)->next = t;
t = *head;
*head = h;
}
*head = t;
return (*head);
}
