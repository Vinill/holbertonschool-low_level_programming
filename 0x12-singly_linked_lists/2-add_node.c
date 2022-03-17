#include "lists.h"

/**
 *add_node - unction that adds a new node at the beginning of a list_t list
 *
 *@head: Pointer to pointer to linked list
 *
 *@str: pointer to string in previous first node
 *
 *Return: address of new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int i = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	while (str[i])
		i++;

	new->str = strdup(str);
	new->len = i;
	new->next = *head;

	*head = new;

	return (new);
}
