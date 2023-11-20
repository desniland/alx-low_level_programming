#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - add node at end of a listint_t list.
 *
 * @head: head of double pointer
 * @n: int add the list
 * Return: NULL on failure
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *x;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	x = *head;
	while (x->next != NULL)
	{
		x = x->next;
	}
	x->next = new;
	return (new);
}
