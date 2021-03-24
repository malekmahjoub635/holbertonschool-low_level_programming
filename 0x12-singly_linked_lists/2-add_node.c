#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
/**
 * add_node - Add a new node at the beginning of a list
 * @head: double pointer
 * @str: string to add
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
list_t *n;
unsigned int l = 0;
while (str[l])
l++;
n = malloc(sizeof(list_t));
if (!n)
return (NULL);
n->str = strdup(str);
n->len = l;
n->next = (*head);
(*head) = n;
return (*head);
}
