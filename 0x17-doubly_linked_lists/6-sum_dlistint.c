#include "lists.h"

/**
 * sum_dlistint - the sum of the elements in the list
 * @head: head node
 * Return: The sumed nodes
 */

int sum_dlistint(dlistint_t *head)
{
dlistint_t *current;
dlistint_t *next;
int sum = 0;

current = head;

while (current != NULL)
{
next = current->next;
sum += current->n;
current = next;
}
return (sum);
}
