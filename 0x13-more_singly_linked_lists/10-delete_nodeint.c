#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: pointer to pointer
 * @index: index of node
 *
 * Return: pointer to the index node
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int x;
	listint_t *y, *next;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}
	y = *head;
	for (x = 0; x < index - 1; x++)
	{
		if (y->next == NULL)
			return (-1);
		y = y->next;
	}
	next = y->next;
	y->next = next->next;
	free(next);
	return (1);
}
