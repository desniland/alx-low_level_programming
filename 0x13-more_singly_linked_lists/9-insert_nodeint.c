#include "lists.h"
#include <stdlib.h>

/**
* insert_nodeint_at_index - inserting a new node at agiven position
* @head: double pointer
* @idx: index of the node
* @n: new node value
*
* Return: the address of the new node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x;
	listint_t *y, *new;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		y = *head;
		for (x = 0; x < idx - 1 && y != NULL; x++)
		{
			y = y->next;
		}
		if (y == NULL)
			return (NULL);
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	new->next = y->next;	
	y->next = new;
	return (new);
}
