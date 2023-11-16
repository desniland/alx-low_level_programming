#include "lists.h"

/**
 * list_len - checks for number of elements in list
 * @h: name of the list
 * Return: the number of nodes.
*/
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
