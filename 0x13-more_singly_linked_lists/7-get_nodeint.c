#include "lists.h"

/**
 * get_nodeint_at_index - Function that returns
 *	the nth node of a listint_t linked list
 *
 *@head: Pointer
 *
 *@index: Aumento
 *
 *Return: Aux
 **/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *aux;
	unsigned int len = 0;

	if (head == NULL)
		return (NULL);

	aux = head;

	while (len != index)
	{
		if ((aux->next) != NULL)
			aux = aux->next;
		else
			return (NULL);
		len++;
	}
	return (aux);
}
