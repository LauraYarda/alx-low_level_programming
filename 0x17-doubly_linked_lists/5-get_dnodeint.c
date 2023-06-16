#include "lists.h"
#include <stdio.h>

/**
 * get_dnodeint_at_index - It returns the nth node of linked list.
 * @head: The head
 * @index:  index to return
 * Return: 0
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *current;

if (head == NULL)
return (0);

current = head;

while (index != 0)
{
current = current->next;
index--;
if (current == NULL)
return (0); /*Out of range*/
}

return (current);
}
