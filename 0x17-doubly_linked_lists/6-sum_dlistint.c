#include "lists.h"
/**
 * sum_dlistint - returns the sum of a linked list
 * @head: head pointer
 * Return: 0 or sum
 */
int sum_dlistint(dlistint_t *head)
{
int sum = 0;
while (head)
{
sum += head->n;
head = head->next;
}
return (sum);
}
