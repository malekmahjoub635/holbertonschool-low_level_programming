#include "lists.h"
/**
 * sum_dlistint - returns the sum of a linked list
 * @head: head pointer
 * Return: 0 or sum
 */
int sum_dlistint(dlistint_t *head)
{
int sum;

if (head == NULL)
return (0);
for (sum = 0; head != NULL; sum++)
{
sum += head->n;
head = head->next;
}
return (sum);
}
