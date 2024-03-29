#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: head
 * @n: the value
 * Return: An unsigned integer
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t  *new_dnodeint_begin = malloc(sizeof(dlistint_t));

if (new_dnodeint_begin == NULL)
return (NULL);
new_dnodeint_begin->n = n;
new_dnodeint_begin->next = *head;
new_dnodeint_begin->prev = NULL;
if (*head != NULL)
(*head)->prev = new_dnodeint_begin;
*head = new_dnodeint_begin;
return (new_dnodeint_begin);
}
