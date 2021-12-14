#include "lists.h"

/**
 * add_dnodeint_end - Add a nodeint at the end
 * @head: head
 * @n: integer
 * Return: new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t  *new_dnodeint_end = malloc(sizeof(dlistint_t));
dlistint_t *new;

if (new_dnodeint_end == NULL)
return (NULL);
new_dnodeint_end->n = n;
new_dnodeint_end->next = NULL;
if (*head == NULL)
{
new_dnodeint_end->prev = NULL;
*head = new_dnodeint_end;
}
else
{
new = *head;
while (new->next)
new = new->next;
new_dnodeint_end->prev = new;
new->next = new_dnodeint_end;
}
return (new_dnodeint_end);
}
