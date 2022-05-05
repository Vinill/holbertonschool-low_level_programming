#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: Node head
 *
 * Return: Number of nodes in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
    unsigned int nodes = 0;

	while (h)
	{
	h = h->next;
        nodes++;
	}

	return (nodes);
}
