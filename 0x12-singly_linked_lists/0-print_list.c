#include "lists.h"

/**
 *print_list - function that prints all the elements of a list_t lis
 *
 *@h: Pointer
 *
 *Return: The number of nodes
 */

size_t print_list(const list_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
			h = h->next;
		}
		i++;
	}
	return (i);
}

