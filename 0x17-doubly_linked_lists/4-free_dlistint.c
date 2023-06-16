#include "lists.h"

/**
 * free_dlistint - It frees the listint_t list
 * @head: The head of linked list
 * Return: the freed nodes
 */

void free_dlistint(dlistint_t *head)
{
dlistint_t *current;
dlistint_t *next;

current = head;

while (current != NULL)
{
next = current->next;
free(current);
current = next;
}
}
