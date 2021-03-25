#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a list
 * @head: head
 * @n: integer
 * Return: new nodeint
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t  *new = malloc(sizeof(listint_t));
listint_t *j;
if (new == NULL)
return (NULL);
new->n = n;
new->next = NULL;
if (*head == NULL)
*head = new;
else
{
j = *head;
while (j->next)
j = j->next;
j->next = new;
}
return (new);
}
