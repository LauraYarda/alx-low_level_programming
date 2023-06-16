#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint -  prints elements of  doubly linked list
 * @h: The linked list
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
const dlistint_t *current = h;
size_t nbr_nodes = 0;

while (current != NULL)
{
printf("%i\n", current->n);
current = current->next;
nbr_nodes++;
}

return (nbr_nodes);
}
