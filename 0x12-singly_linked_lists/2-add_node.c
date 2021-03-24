#include "lists.h"

/**
 * add_node - Add a new node at the beginning of a list
 * @head: double pointer
 * @str: string to add
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
list_t *i;
unsigned int j = 0;
while (str[j])
j++;
i = malloc(sizeof(list_t));
if (!i)
return (NULL);
i->str = strdup(str);
i->len = l;
i->next = (*head);
(*head) = i;
return (*head);
}
