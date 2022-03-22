#include "lists.h"

/**
 *add_nodeint - Function that adds a new node at
 *	the beginning of a listint_t list
 *
 *@head: Pointer
 *
 *@n: Numero que nos dan
 *
 *Return: newList
 **/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newList;

	newList = malloc(sizeof(listint_t));

	if (newList == NULL)
		return (NULL);

	newList->n = n;
	newList->next = *head;
	*head = newList;

	return (newList);
}
