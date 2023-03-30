#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * free_list - frees a list
 * @head: a list that enters to the function
 *
 * Return: 0
 */
void free_list(list_t *head)
{
	list_t *temp;

	temp = head;
	while (temp != NULL)
	{
	free(temp->str);
	free(temp);
	temp = temp->next;
	}
}
