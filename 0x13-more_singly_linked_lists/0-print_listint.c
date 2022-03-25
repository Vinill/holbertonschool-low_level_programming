#include "lists.h"

/**
 *print_listint - function that prints all the elements of a listnt_t list
 *
 *@h: Pointer
 *
 *Return: The number of nodes
 */

size_t print_listint(const listint_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
