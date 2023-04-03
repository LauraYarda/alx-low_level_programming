#include "lists.h"
/**
 * free_listint - frees a linked list
 * @head: listint_t list to be freed
 *
 * Return: 0;
 */
void free_listint(listint_t *head)
{
	listint_t *temp = head;

	while (temp)
	{
	head = temp->next;
	free(temp);
	temp = head;
	}
}
