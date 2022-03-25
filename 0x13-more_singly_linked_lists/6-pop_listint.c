#include "lists.h"

/**
 *pop_listint - Function that deletes the head node of a listint_t
 *	linked list, and returns the head node’s data (n)
 *
 *@head: Póinter
 *
 *Return: Num
 */
int pop_listint(listint_t **head)
{
	listint_t *deleted_node;
	int num;

	if (*head == NULL)
		return (0);

	deleted_node = *head;
	num = deleted_node->n;
	*head = deleted_node->next;

	free(deleted_node);
	return (num);
}
