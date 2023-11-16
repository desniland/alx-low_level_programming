#include "lists.h"

/**
* _strlen - function that returns the length of a string.
* @s : s is a character
* Return: x
*/
int _strlen(const char *s)
{
int x = 0;

while (s[x] != '\0')
{
x++;
}
return (x);
}
/**
 * add_node_end - adds a new node to the end of linked list
 * @head: double pointer to a linked list
 * @str: string to add to the new node
 *
 * Return: pointer to the new node
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n, *tmp;

	if (str == NULL)
		return (NULL);
	n = malloc(sizeof(list_t));
	if (n == NULL)
		return (NULL);
	n->str = strdup(str);
	if (n->str == NULL)
	{
		free(n);
		return (NULL);
	}
	n->len = _strlen(n->str);
	n->next = NULL;
	if (*head == NULL)
	{
		*head = n;
		return (n);
	}
	tmp = *head;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = n;
	return (n);
}
