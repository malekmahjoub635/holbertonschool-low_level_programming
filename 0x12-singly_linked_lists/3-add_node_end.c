#include "lists.h"

/**
 * add_node_end - Add a new node at the end of a list
 * @head: head
 * @str: string to add
 * Return: new element or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
list_t  *i = malloc(sizeof(list_t));
list_t *n;
unsigned int j = 0;
if (i == NULL)
return (NULL);
while (str[j])
j++;
i->str = strdup(str);
i->len = j;
i->next = NULL;
if (*head == NULL)
*head = i;
else
{
n = *head;
while (n->next)
n = n->next;
n->next = i;
}
return (i);
}
