#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - It inserts node at a new node
 * @h: The head of linked list
 * @idx: The index of the new node
 * @n: the new node
 * Return: The new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *current;
dlistint_t *new;

if (h == NULL)
return (0);

current = *h;

while (idx != 0)
{
current = current->next;
idx--;
if (current == NULL)
return (NULL);
}

new = malloc(sizeof(dlistint_t));

if (new == NULL)
{
free(new);
return (NULL);
}

new->n = n;
new->next = current;
new->prev = current->prev;
if (current->prev != NULL)
current->prev->next = new;

return (current);
}
