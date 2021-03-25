#include "lists.h"

/**
 * pop_listint - deletes the head node of a list
 * @head: head pointer
 * Return: modified listint
 */

int pop_listint(listint_t **head)
{
int n;
listint_t  *i;
if (*head == NULL || head == NULL)
return (0);
n = (*head)->n;
i = (*head)->next;
free(*head);
*head = i;
return (n);
}
