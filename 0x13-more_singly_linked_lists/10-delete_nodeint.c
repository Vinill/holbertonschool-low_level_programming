#include "lists.h"

/**
 *delete_nodeint_at_index - Function that deletes the node at
 *	index index of a listint_t linked list
 *
 *@head: Double pointer
 *
 *@index: Variable for incfrement
 *
 *Return: 1 if it succeeded, -1 if it failed
 **/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;

	listint_t *act, *next;

	if (head == NULL || *head == NULL)
		return (-1);

	act = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(act);
		return (1);
	}

	while (i < (index - 1))
	{
		act = act->next;

		if (act == NULL)
			return (-1);

		i++;
	}

	next = act->next;
	act->next = next->next;
	free(next);

	return (1);
}
