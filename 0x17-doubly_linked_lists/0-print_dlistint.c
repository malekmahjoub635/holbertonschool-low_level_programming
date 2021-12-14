#include "lists.h"

/**
 *print_dlistint - print a list of nodes
 *@h: head pointer
 *Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)

{
  int i;

  for (i = 0; h != NULL; i++)
    {
      printf("%d\n", h->n);
      h = h->next;
    }
  return (i);
}
