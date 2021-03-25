#include "lists.h"
/**
 * sum_listint - returns the sum of a list
 * @head: head
 * Return: integer
 */
int sum_listint(listint_t *head)
{
int s;
if (head == NULL)
return (0);
for (s = 0; head != NULL;)
{
s += head->n;
head = head->next;
}
return (s);
}
