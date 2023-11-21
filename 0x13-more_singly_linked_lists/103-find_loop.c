#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: pointer to the beginning of the list
 *
 * Return: address of node where the loop starts or NULL if there is no loop
*/
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *jerry, *tom;

	jerry = tom = head;
	while (jerry && tom && tom->next)
	{
		jerry = jerry->next;
		tom = tom->next->next;
		if (jerry == tom)
		{
			jerry = head;
			break;
		}
	}
	if (!jerry || !tom || !tom->next)
		return (NULL);
	while (jerry != tom)
	{
		jerry = jerry->next;
		tom = tom->next;
	}
	return (tom);
}
