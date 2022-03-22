#include "lists.h"

/**
 *free_listint - Function that frees a listint_t list.
 *
 *@head: Pointer
 *
 *Return: 0
 */
void free_listint(listint_t *head)
{
	listint_t *actual, *next;

	actual = head;

	while (actual != NULL)
	{
		next = actual->next;
		free(actual);
		actual = next;
	}
}
