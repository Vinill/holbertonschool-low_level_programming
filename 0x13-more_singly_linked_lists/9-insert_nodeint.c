#include "lists.h"

/**
 *insert_nodeint_at_index - Function that inserts a
 *	new node at a given position
 *
 *@head: Double pointer
 *
 *@idx: Variable of type unsigned int for increment
 *
 *@n: Variable of type n
 *
 *Return: Next node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *act, *next;

	act = *head;

	next = malloc(sizeof(listint_t));

	if (next == NULL)
		return (NULL);

	next->n = n;

	if (idx == 0)
	{
		next->next = act;
		*head = next;
		return (*head);
	}

	while (idx > 1)
	{
		act = act->next;
		idx--;

		if (act == NULL)
		{
			free(next);
			return (NULL);
		}

	}

	next->next = act->next;
	act->next = next;

	return (next);
}
