#include "lists.h"

/**
* free_listint - insert node at the end of the list
* @head: pointer to head of list
* Return: tmp
*/
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free (tmp);
	}
}
