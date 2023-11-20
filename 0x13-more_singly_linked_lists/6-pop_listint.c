#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node
 * @head: a pointer to pointer
 *
 * Return: empty
*/
int pop_listint(listint_t **head)
{
	listint_t *bgn;
	int x;

	if (head == NULL || *head == NULL)
		return (0);
	bgn = *head;
	*head = bgn->next;
	x = bgn->n;
	free(bgn);
	return (x);
}
