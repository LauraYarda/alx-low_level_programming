#include "lists.h"
/**
 * free_listint2 - frees a linked list
 * @head: listint_t list to be freed
 *
 * Return: sets the head to NULL
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
	return;

	while (*head)
{
	temp = (*head)->next;
	free(*head);
	*head = temp;
}
	*head = NULL;
}
