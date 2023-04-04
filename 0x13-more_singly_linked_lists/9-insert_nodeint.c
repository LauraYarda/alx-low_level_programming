#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node in a linked list
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *temp = *head;

	listint_t *newNode = malloc(sizeof(listint_t));

	newNode->n = n;

	if (*head == NULL)
	{
	newNode->next = NULL;
	*head = newNode;
	return (NULL);
	}

	if (idx == 0)
	{
	newNode->next = *head;
	*head = newNode;
	return (newNode);
	}

	while (i < idx - 1 && temp->next)
	{
	temp = temp->next;
	i++;
	}
	newNode->next = temp->next;
	temp->next = newNode;
	return (newNode);
}
