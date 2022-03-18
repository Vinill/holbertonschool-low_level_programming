#include "lists.h"

/**
 *add_node_end - function that adds a new node at the end of a list_t list
 *
 *@head: pointer to head of list
 *
 *@str: string recived
 *
 *Return: new node
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *last = *head;
	int c = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	while (str[c] != '\0')
		c++;

	new->str = strdup(str);
	new->len = c;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (last->next != NULL)
		last = last->next;

	last->next = new;

	return (new);
}
